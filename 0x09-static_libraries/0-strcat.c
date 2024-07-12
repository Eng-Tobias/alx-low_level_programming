#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
*
* Return: A pointer to the resulting string @dest.
*/
char *_strcat(char *dest, const char *src)
{
char *dest_start = dest;

/* Find the end of the destination string */
while (*dest)
{
dest++;
}

/* Append the source string to the destination string */
while (*src)
{
*dest = *src;
dest++;
src++;
}

/* Null-terminate the resulting string */
*dest = '\0';

return (dest_start);
}
