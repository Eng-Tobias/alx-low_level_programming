#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* main - Adds positive numbers.
* @argc: Number of command line arguments.
* @argv: Array containing the command line arguments.
*
* Return: 0 on success, 1 if an argument contains non-digit symbols.
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
