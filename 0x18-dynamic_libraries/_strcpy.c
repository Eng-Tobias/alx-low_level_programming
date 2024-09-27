#include "main.h"

/**
 * _strcpy - copies a string to another buffer
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *ptr = dest;

    while (*src)
        *dest++ = *src++;
    *dest = '\0';

    return (ptr);
}
