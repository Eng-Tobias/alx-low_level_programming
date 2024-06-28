#include "main.h"
#include <math.h>

/**
* largest_prime_factor - Finds the largest prime factor of a given number.
* @number: The number to find the largest prime factor of.
*
* Return: The largest prime factor of the number.
*/
long largest_prime_factor(long number)
{
long max_prime = -1;
long i;

/* Check for number of 2s */
while (number % 2 == 0)
{
max_prime = 2;
number /= 2;
}

/* Check for odd factors from 3 onwards */
for (i = 3; i <= sqrt(number); i += 2)
{
while (number % i == 0)
{
max_prime = i;
number /= i;
}
}

/* If the remaining number is a prime number greater than 2 */
if (number > 2)
{
max_prime = number;
}

return max_prime;
}
