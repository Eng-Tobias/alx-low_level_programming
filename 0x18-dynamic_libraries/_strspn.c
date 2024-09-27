#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to match in the initial segment of s
 *
 * Return: the number of bytes in the initial segment of s that consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int length = 0;
    char *a;

    while (*s)
    {
        for (a = accept; *a; a++)
        {
            if (*s == *a)
                break;
        }

        if (*a == '\0')
            return (length);

        length++;
        s++;
    }

    return (length);
}
