#include "main.h"
#include <stdlib.h>

/**
* _strdup - Duplicates a string in newly allocated memory.
* @str: The string to duplicate.
*
* Return: Pointer to the duplicated string, or NULL if str is NULL
*         or if memory allocation fails.
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int len = 0;
unsigned int i;

if (str == NULL)
return (NULL);

/* Calculate the length of str */
while (str[len])
len++;

/* Allocate memory for duplicate (+1 for null terminator) */
duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

/* Copy str to duplicate */
for (i = 0; i <= len; i++)
duplicate[i] = str[i];

return (duplicate);
}
