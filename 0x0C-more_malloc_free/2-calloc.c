#include "main.h"
#include <stdlib.h>  /* for malloc, free */
#include <stddef.h>  /* for NULL */

/**
* _calloc - Allocates memory for an array, using malloc
* @nmemb: Number of elements
* @size: Size of each element
*
* Return: Pointer to allocated memory
*         NULL if malloc fails or if nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int total_size, i;

/* Handle case where nmemb or size is 0 */
if (nmemb == 0 || size == 0)
return (NULL);

/* Calculate total size */
total_size = nmemb * size;

/* Allocate memory using malloc */
ptr = malloc(total_size);

/* Check if malloc failed */
if (ptr == NULL)
return (NULL);

/* Initialize allocated memory to 0 */
for (i = 0; i < total_size; i++)
ptr[i] = 0;

return ((void *)ptr);
}
