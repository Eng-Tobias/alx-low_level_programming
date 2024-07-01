#include "main.h"

/**
* _puts - Prints a string, followed by a new line, to stdout
* @str: Pointer to input string
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');  /* Print new line at the end */
}
