#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
/* Use the write system call to print to stderr */
/* write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59); */
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);
}
