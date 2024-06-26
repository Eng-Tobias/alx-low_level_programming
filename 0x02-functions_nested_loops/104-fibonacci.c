#include "main.h"

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2
*
* Return: Always 0
*/
int main(void)
{
unsigned long int a = 1, b = 2, next;
int count;

_putchar('1');
_putchar(',');
_putchar(' ');
_putchar('2');

for (count = 3; count <= 98; count++)
{
next = a + b;
if (count < 98)
{
_putchar(',');
_putchar(' ');
}
print_number(next);
a = b;
b = next;
}
_putchar('\n');

return (0);
}

/**
* print_number - prints an unsigned long integer using _putchar
* @n: the number to be printed
*/
void print_number(unsigned long int n)
{
if (n / 10)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
