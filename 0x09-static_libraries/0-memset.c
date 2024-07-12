#include "main.h"

/**
* _memset - Fills memory with a constant byte.
* @s: The memory area to be filled.
* @b: The byte to fill the memory with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
