#include "main.h"

/**
* main - computes and prints the sum of even Fibonacci numbers
*        whose values do not exceed 4,000,000
*
* Return: Always 0
*/
int main(void)
{
unsigned long int a = 1, b = 2, next, sum = 0;

while (b <= 4000000)
{
if (b % 2 == 0)
{
sum += b;
}
next = a + b;
a = b;
b = next;
}

_putchar((sum / 1000000) + '0');
sum %= 1000000;
_putchar((sum / 100000) + '0');
sum %= 100000;
_putchar((sum / 10000) + '0');
sum %= 10000;
_putchar((sum / 1000) + '0');
sum %= 1000;
_putchar((sum / 100) + '0');
sum %= 100;
_putchar((sum / 10) + '0');
sum %= 10;
_putchar(sum + '0');
_putchar('\n');

return (0);
}
