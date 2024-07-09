#include "main.h"
#include <stddef.h> /* Include <stddef.h> for NULL definition */

/**
* _strstr - locates a substring
* @haystack: the string to search
* @needle: the substring to find
*
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
char *hay_ptr, *ndl_ptr;

while (*haystack)
{
hay_ptr = haystack;
ndl_ptr = needle;

while (*hay_ptr && *ndl_ptr && *hay_ptr == *ndl_ptr)
{
hay_ptr++;
ndl_ptr++;
}

if (!*ndl_ptr)
return haystack;

haystack++;
}

return (NULL);
}
