#include "main.h"
#include <stdlib.h>  /* for malloc, free */

/**
* array_range - Creates an array of integers
* @min: Minimum value (inclusive)
* @max: Maximum value (inclusive)
*
* Return: Pointer to the newly created array
*         NULL if min > max or if malloc fails
*/
int *array_range(int min, int max)
{
int *arr;
int size, i;

/* Check if min > max */
if (min > max)
return (NULL);

/* Calculate size of the array */
size = max - min + 1;

/* Allocate memory using malloc */
arr = malloc(size * sizeof(int));

/* Check if malloc failed */
if (arr == NULL)
return (NULL);

/* Fill the array with values from min to max */
for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}
