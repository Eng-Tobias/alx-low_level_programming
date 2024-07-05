#include "main.h"
#include <stdio.h>  /* Include the standard I/O library for printf and putchar */

/**
 * print_buffer - Prints a buffer in a specific format
 * @b: Pointer to the buffer to print
 * @size: Number of bytes to print from the buffer
 *
 * Description: Prints the content of the buffer @b in a specific format.
 *              Prints 10 bytes per line, starting with the position of the
 *              first byte of the line in hexadecimal, then the content of
 *              the buffer in hexadecimal (2 bytes at a time), and finally
 *              the printable characters (or a . for non-printable characters).
 *              Each line is followed by a newline \n.
 */
void print_buffer(char *b, int size)
{
int i, j;

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

/* Print hexadecimal content */
for (j = 0; j < 10; j++)
{
if (j + i < size)
printf("%02x", b[i + j]);
else
printf("  ");

if (j % 2 != 0)
printf(" ");
}

/* Print printable characters */
for (j = 0; j < 10; j++)
{
if (j + i < size)
{
if (b[i + j] >= 32 && b[i + j] <= 126)
putchar(b[i + j]);
else
putchar('.');
}
else
{
putchar(' ');
}
}

printf("\n");
}

if (size <= 0)
printf("\n");
}
