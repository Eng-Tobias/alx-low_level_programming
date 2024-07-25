#include "function_pointers.h"
#include <stddef.h>

#include "function_pointers.h"

/**
* on each element of an array
* @array: array to iterate over
* @size: size of the array
* @action: pointer to the function to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
