#include "main.h"
#include <stdlib.h>  /* for malloc and exit */

/**
* malloc_checked - Allocates memory using malloc
* @b: Size of memory to allocate
*
* Return: Pointer to the allocated memory
* If malloc fails, the malloc_checked function causes normal process
* termination with a status value of 98.
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
