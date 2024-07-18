#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two positive numbers
* @argc: Number of arguments
* @argv: Array of arguments
*
* Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
char *num1, *num2;
int *result;
int len1, len2, len_result, i, j, carry, digit;

/* Validate number of arguments */
if (argc != 3)
{
printf("Error\n");
exit(98);
}

/* Validate num1 */
num1 = argv[1];
len1 = 0;
while (num1[len1])
{
if (num1[len1] < '0' || num1[len1] > '9')
{
printf("Error\n");
exit(98);
}
len1++;
}

/* Validate num2 */
num2 = argv[2];
len2 = 0;
while (num2[len2])
{
if (num2[len2] < '0' || num2[len2] > '9')
{
printf("Error\n");
exit(98);
}
len2++;
}

/* Initialize result array */
len_result = len1 + len2;
result = malloc(sizeof(int) * len_result);
if (result == NULL)
{
printf("Error\n");
exit(98);
}
for (i = 0; i < len_result; i++)
result[i] = 0;

/* Multiply num1 and num2 */
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1, carry = 0; j >= 0; j--)
{
digit = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
carry = digit / 10;
result[i + j + 1] = digit % 10;
}
result[i + j + 1] += carry;
}

/* Skip leading zeros */
i = 0;
while (result[i] == 0 && i < len_result - 1)
i++;

/* Print the result */
for (; i < len_result; i++)
printf("%d", result[i]);
printf("\n");

/* Free allocated memory */
free(result);

return (0);
}
