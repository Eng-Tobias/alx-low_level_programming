#include "main.h"

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');  /* Print '0' or '1' based on return value */
    
r = _islower('o');
_putchar(r + '0');  /* Print '0' or '1' based on return value */
    
r = _islower(108);  /* ASCII value for 'l' */
_putchar(r + '0');  /* Print '0' or '1' based on return value */
    
_putchar('\n');     /* Print a newline */

return (0);
}
