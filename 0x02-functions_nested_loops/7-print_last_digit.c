/* 7-print_last_digit.c */

#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number to extract the last digit from
*
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0) /* handle negative numbers */
last_digit = -last_digit;

_putchar(last_digit + '0');
return last_digit;
}
