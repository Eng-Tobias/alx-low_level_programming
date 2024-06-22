#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hundreds, tens, ones;

for (hundreds = 0; hundreds <= 7; hundreds++)
{
for (tens = hundreds + 1; tens <= 8; tens++)
{
for (ones = tens + 1; ones <= 9; ones++)
{
putchar(hundreds + '0');
putchar(tens + '0');
putchar(ones + '0');

if (hundreds != 7 || tens != 8 || ones != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
