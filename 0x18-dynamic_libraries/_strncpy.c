#include "main.h"

/**
 * _strncpy - copies a string, using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;

    while (n-- && (*dest++ = *src++))
        ;
    
    while (n-- > 0)
        *dest++ = '\0';

    return (ptr);
}
