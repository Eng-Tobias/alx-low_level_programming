#include "main.h"
#include <stdio.h>

int main(void)
{
long number = 612852475143;
long largest_prime = largest_prime_factor(number);
printf("Largest prime factor of %ld is %ld\n", number, largest_prime);
return 0;
}
