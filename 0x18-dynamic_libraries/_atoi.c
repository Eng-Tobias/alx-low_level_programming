#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    while (*s == ' ')
        s++;
    
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    else if (*s == '+')
        s++;

    while (*s >= '0' && *s <= '9')
        result = result * 10 + (*s++ - '0');

    return (result * sign);
}
