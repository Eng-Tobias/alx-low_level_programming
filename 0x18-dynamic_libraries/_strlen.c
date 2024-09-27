#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;
    
    return (len);
}
