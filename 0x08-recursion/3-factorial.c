#include "main.h"

/**
* factorial - Computes the factorial of a number recursively
* @n: The number to compute the factorial of
*
* Return: The factorial of n, or -1 if n is negative (error)
*/
int factorial(int n)
{
if (n < 0)
return (-1); /* Return -1 for negative numbers (error case) */

/* Base case: factorial of 0 is 1 */
if (n == 0)
return (1);

/* Recursive case: compute factorial using recursion */
return (n * factorial(n - 1));
}
