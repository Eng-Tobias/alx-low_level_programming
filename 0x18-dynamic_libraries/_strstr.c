#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    while (*haystack)
    {
        h = haystack;
        n = needle;

        while (*n && (*haystack == *n))
        {
            haystack++;
            n++;
        }

        if (!*n)
            return (h);

        haystack = h + 1;
    }

    return (NULL);
}
