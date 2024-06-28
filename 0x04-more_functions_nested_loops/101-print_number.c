#include "main.h"

/**
* print_number - Prints an integer.
* @n: The integer to be printed.
*/
void print_number(int n)
{
int div = 1;
int last_digit;

if (n < 0) {
_putchar('-');
n = -n;
}

while (n / div >= 10)
div *= 10;

while (div != 0) {
last_digit = n / div;
_putchar(last_digit + '0');
n %= div;
div /= 10;
}
}
