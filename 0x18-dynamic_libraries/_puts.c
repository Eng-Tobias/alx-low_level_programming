#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @s: the string to print
 */
void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}
