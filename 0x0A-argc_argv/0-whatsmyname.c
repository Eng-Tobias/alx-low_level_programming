#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argc; /* Unused parameter (argc) being explicitly ignored */

/* Print the program name */
for (int i = 0; argv[0][i] != '\0'; i++)
_putchar(argv[0][i]);
_putchar('\n');

return (0);
}
