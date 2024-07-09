#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the initial segment
* @accept: the bytes to include
*
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *ptr;

while (*s)
{
for (ptr = accept; *ptr; ptr++)
{
if (*s == *ptr)
{
count++;
break;
}
}
if (*ptr == '\0')
{
break;
}
s++;
}
return (count);
}
