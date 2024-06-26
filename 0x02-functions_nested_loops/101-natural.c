/* 101-natural.c */

#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
int sum;
sum = sum_multiples();
_putchar((sum / 100000) % 10 + '0');
_putchar((sum / 10000) % 10 + '0');
_putchar((sum / 1000) % 10 + '0');
_putchar((sum / 100) % 10 + '0');
_putchar((sum / 10) % 10 + '0');   
_putchar(sum % 10 + '0');
_putchar('\n');
return (0);
}

/**
* sum_multiples - Computes sum of multiples of 3 or 5 below 1024
*
* Return: Sum of multiples
*/
int sum_multiples(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
return (sum);
}
