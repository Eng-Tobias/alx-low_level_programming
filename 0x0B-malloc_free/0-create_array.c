#include "main.h"
#include <stdlib.h>

/**
* create_array -An array of chars, initialized with a specific char.
* @size: The size of the array to be created.
* @c: The specific char to initialize the array with.
*
* Return: Pointer to the created array,NULL if size is 0 or malloc fails.
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(size * sizeof(char));

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
