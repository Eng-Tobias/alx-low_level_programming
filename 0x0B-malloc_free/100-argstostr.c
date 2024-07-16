#include "main.h"
#include <stdlib.h>

/**

argstostr - Concatenates all arguments of the program.

@ac: Argument count.

@av: Argument vector.

Return: Pointer to a new string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length of the new string /
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++; / For the newline character /
}
len++; / For the null terminator */

str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);

/* Copy the arguments into the new string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}
str[k] = '\0';

return (str);
}
