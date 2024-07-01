#include "main.h"
#include <limits.h> /* For INT_MAX and INT_MIN definitions */

/**
* _atoi - Convert a string to an integer.
* @s: The string to convert.
*
* Return: The integer value converted from the string.
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;   /* Initialize sign as positive */
int result = 0; /* Initialize result as 0 */

/* Iterate through whitespace characters */
while (s[i] == ' ')
i++;

/* Determine sign of the number */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

/* Process each character of the string */
while (s[i] >= '0' && s[i] <= '9')
{
/* Check for overflow before adding next digit */
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}

/* Accumulate digit into result */
result = result * 10 + (s[i] - '0');
i++;
}

/* Return the final result with sign */
return sign * result;
}
