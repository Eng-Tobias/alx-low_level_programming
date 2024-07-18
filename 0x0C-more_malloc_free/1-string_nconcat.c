#include "main.h"
#include <stdlib.h>  /* for malloc, free */
#include <stddef.h>  /* for NULL */
#include <stdio.h>   /* for printf */

/**
* string_nconcat - Concatenates two strings
* @s1: First string
* @s2: Second string
* @n: Number of bytes of s2 to concatenate
*
* Return: Pointer to newly allocated memory containing concatenated string
*         NULL if allocation fails or if NULL is passed as s1 or s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1, len2, concat_len, i, j;

/* Handle case where s1 is NULL */
if (s1 == NULL)
s1 = "";

/* Handle case where s2 is NULL */
if (s2 == NULL)
s2 = "";

/* Calculate lengths of s1 and s2 */
for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;

/* Allocate memory for concatenated string */
if (n >= len2)
n = len2;

concat_len = len1 + n + 1;
concat = malloc(sizeof(char) * concat_len);
if (concat == NULL)
return (NULL);

/* Copy s1 into concat */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

/* Copy first n bytes of s2 into concat after s1 */
for (j = 0; j < n; j++, i++)
concat[i] = s2[j];

/* Null-terminate the concatenated string */
concat[i] = '\0';

return (concat);
}
