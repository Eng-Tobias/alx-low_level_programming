#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to modify.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;

/* Check for the first character of the string */
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}

/* Traverse the string */
for (i = 1; str[i] != '\0'; i++)
{
/* Check for separators */
if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
/* Capitalize if the current character is a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
}

return str;
}
