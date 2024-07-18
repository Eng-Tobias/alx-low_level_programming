#include "main.h"
#include <stdlib.h> /* for malloc, free */
#include <stdio.h>  /* for printf */

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory previously allocated with malloc(old_size)
* @old_size: Size of the allocated space for ptr
* @new_size: New size of the new memory block
*
* Return: Pointer to the newly reallocated memory block
*         NULL if malloc fails or if new_size == 0 and ptr is not NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int min_size;
unsigned int i;

/* Handle case where new_size is zero */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* Handle case where ptr is NULL */
if (ptr == NULL)
{
return (malloc(new_size));
}

/* Handle case where new_size is equal to old_size */
if (new_size == old_size)
{
return (ptr);
}

/* Allocate memory for the new size */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}

/* Determine the minimum size to copy */
min_size = old_size < new_size ? old_size : new_size;

/* Copy the contents from old ptr to new ptr */
for (i = 0; i < min_size; i++)
{
new_ptr[i] = ((char *)ptr)[i];
}

/* Free the old pointer */
free(ptr);

return (new_ptr);
}
