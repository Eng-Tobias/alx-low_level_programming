#include "main.h"

/**
* _sqrt_check - Checks for the square root of n using recursion
* @n: The number to find the square root of
* @x: The current guess at the square root
*
* Return: The natural square root of n, or -1 if n doesn't have a natural square root
*/
int _sqrt_check(int n, int x)
{
if (x * x == n)
return x;
if (x * x > n)
return -1;
return _sqrt_check(n, x + 1);
}

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to find the square root of
*
* Return: The natural square root of n, or -1 if n doesn't have a natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return -1;
return _sqrt_check(n, 0);
}
