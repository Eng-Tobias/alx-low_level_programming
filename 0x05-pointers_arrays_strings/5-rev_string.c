#include "main.h"

/**
* rev_string - Reverses a string.
* @s: The string to be reversed.
*/
void rev_string(char *s)
{
int length = 0;
int i;
char temp;

/* Find the length of the string */
while (s[length] != '\0')
{
length++;
}

/* Swap characters from the start and end */
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
