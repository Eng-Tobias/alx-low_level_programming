#include "main.h"

void print_binary(unsigned long int n)
{
unsigned long int mask;
int leading_zero = 1;

if (n == 0)
{
_putchar('0');
return;
}

/* Find the highest bit position */
for (mask = 1UL << (sizeof(unsigned long int) * 8 - 1); mask > 0; mask >>= 1)
{
if ((n & mask) != 0)
leading_zero = 0;
if (!leading_zero)
_putchar((n & mask) ? '1' : '0');
}
}
