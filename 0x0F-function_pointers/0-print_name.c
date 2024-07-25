#include "function_pointers.h"

/**
* print_name - prints a name using the provided function
* @name: the name to print
* @f: pointer to the function to use for printing the name
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
