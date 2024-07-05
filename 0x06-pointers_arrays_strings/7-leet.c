#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The string to encode.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
int i, j;
char leet_letters[] = "aAeEoOtTlL";
char leet_numbers[] = "44330771";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (leet_letters[j] != '\0')
{
if (str[i] == leet_letters[j])
{
str[i] = leet_numbers[j];
break;
}
j++;}
i++;
}

return str;
}
