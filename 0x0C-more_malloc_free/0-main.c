#include "main.h"
#include <stdio.h>
#include <limits.h>  /* for INT_MAX */

/**
* main - Test the malloc_checked function
*
* Return: Always 0
*/
int main(void)
{
char *c;
int *i;
float *f;
double *d;

c = malloc_checked(sizeof(char) * 1024);
printf("%p\n", (void *)c);
i = malloc_checked(sizeof(int) * 402);
printf("%p\n", (void *)i);
f = malloc_checked(sizeof(float) * 100000000);
printf("%p\n", (void *)f);
d = malloc_checked(INT_MAX);  /* This will fail and should terminate with status 98 */
printf("%p\n", (void *)d);    /* This line may not be reached */

    /* Free allocated memory */
free(c);
free(i);
free(f);

return (0);
}
