#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int sum = 0;
char c;

srand(time(0));
while (sum < 2772 - 122)
{
c = rand() % 94 + 33;
putchar(c);
sum += c;
}
c = 2772 - sum;
putchar(c);

return (0);
}
