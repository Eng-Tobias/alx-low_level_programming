#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
* main - Copies the content of a file to another file.
* @ac: The number of arguments.
* @av: The arguments.
*
* Return: Always 0 on success.
*/
int main(int ac, char **av)
{
int fd_from, fd_to, n_read, n_written;
char buffer[1024];
mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(av[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}

fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
close(fd_from);
exit(99);
}

while ((n_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
n_written = write(fd_to, buffer, n_read);
if (n_written != n_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}

if (n_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
close(fd_from);
close(fd_to);
exit(98);
}

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}
