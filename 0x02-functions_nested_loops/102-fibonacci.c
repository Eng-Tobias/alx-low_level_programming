#include "main.h"
#include <stdio.h>

/**
* print_fibonacci - Prints the first 50 Fibonacci numbers
*/
void print_fibonacci(void)
{
int i;
long int a = 1, b = 2, next;

for (i = 0; i < 50; i++)
{
if (i == 0)
printf("%ld", a);
else if (i == 1)
printf(", %ld", b);
else
{
next = a + b;
printf(", %ld", next);
a = b;
b = next;
}
}
printf("\n");
}
