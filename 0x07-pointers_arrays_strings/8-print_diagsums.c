#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
int i;
int sum_diag1 = 0, sum_diag2 = 0;

for (i = 0; i < size; i++)
{
sum_diag1 += *(a + i * size + i);
sum_diag2 += *(a + i * size + (size - 1 - i));
}

_putchar(sum_diag1 / 1000 + '0');
_putchar(sum_diag1 / 100 % 10 + '0');
_putchar(sum_diag1 / 10 % 10 + '0');
_putchar(sum_diag1 % 10 + '0');
_putchar(',');

_putchar(' ');

_putchar(sum_diag2 / 1000000000 + '0');
_putchar(sum_diag2 / 100000000 % 10 + '0');
_putchar(sum_diag2 / 10000000 % 10 + '0');
_putchar(sum_diag2 / 1000000 % 10 + '0');
_putchar(sum_diag2 / 100000 % 10 + '0');
_putchar(sum_diag2 / 10000 % 10 + '0');
_putchar(sum_diag2 / 1000 % 10 + '0');
_putchar(sum_diag2 / 100 % 10 + '0');
_putchar(sum_diag2 / 10 % 10 + '0');
_putchar(sum_diag2 % 10 + '0');

_putchar('\n');
}
