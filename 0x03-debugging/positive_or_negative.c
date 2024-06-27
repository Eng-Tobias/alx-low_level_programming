#include <stdio.h>
#include "main.h"

/**
* positive_or_negative - prints if a number is positive, zero or negative
* @i: the number to be checked
*/

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}
