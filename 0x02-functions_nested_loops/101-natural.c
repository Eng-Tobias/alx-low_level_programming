/* 101-natural.c */

#include "main.h"

/**
* sum_multiples - computes the sum of all multiples of 3 or 5 below a given limit
* @limit: the upper limit (exclusive)
*
* Return: the sum of multiples of 3 or 5 below the limit
*/
int sum_multiples(int limit)
{
int sum = 0;
int i;

for (i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}

return sum;
}

/**
* main - entry point, prints the sum of all multiples of 3 or 5 below 1024
*
* Return: Always 0 (Success)
*/
int main(void)
{
int result = sum_multiples(1024);

_putchar(result / 1000 + '0');
_putchar(result / 100 % 10 + '0');
_putchar(result / 10 % 10 + '0');
_putchar(result % 10 + '0');
_putchar('\n');

return (0);
}
