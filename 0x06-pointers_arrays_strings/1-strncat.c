#include "main.h"

/**
* _strncat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to be used from src.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;

/* Find the end of dest */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append src to dest*/
while (i < n && src[i] != '\0')
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

/* Null-terminate dest */
dest[dest_len] = '\0';

return (dest);
}
