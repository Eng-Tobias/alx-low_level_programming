#include "main.h"

/**
* _strncpy - Copies a string.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to be copied from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy characters from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* Pad the remaining characters with null characters */
for ( ; i < n; i++)
{
dest[i] = '\0';
}

return dest;
}
