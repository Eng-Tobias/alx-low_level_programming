#include "main.h"
#include <stdlib.h>/*For malloc, free*/

/**
* str_concat - Concatenates two strings
* @s1: The first string
* @s2: The second string
*
* Return: Pointer to the concatenated string (s1 + s2)
* NULL if memory allocation fails or if s1 or s2 is NULL
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i, j;

/* Handle case if s1 or s2 is NULL */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate lengths of s1 and s2 */
while (s1[len1])
len1++;
while (s2[len2])
len2++;

/* Allocate memory for concatenated string (+1 for '\0') */
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);

/* Copy s1 into concat */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

/* Copy s2 into concat */
for (j = 0; j < len2; j++)
concat[i + j] = s2[j];

/* Null-terminate the concatenated string */
concat[i + j] = '\0';

return (concat);
}
