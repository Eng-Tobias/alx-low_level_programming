#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Calculates the minimum number of coins to make change for an amount of money.
* @argc: Number of arguments passed to the program.
* @argv: Array of arguments passed to the program (argv[1] should be the amount in cents).
*
* Return: 0 if successful, 1 if number of arguments is not 1 or if the amount is negative.
*/
int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;

coins++;
}

printf("%d\n", coins);

return (0);
}
