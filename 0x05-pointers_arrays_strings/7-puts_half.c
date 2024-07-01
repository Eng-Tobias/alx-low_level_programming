#include "main.h"

/**
* puts_half - Prints half of a string followed by a new line.
* @str: The string to be printed.
*/
void puts_half(char *str)
{
int len = 0;
int start;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len - 1) / 2 + 1;
}

for (; start < len; start++)
{
_putchar(str[start]);
}
_putchar('\n');
}
