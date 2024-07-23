#include <stdio.h>
#include <stdlib.h> /* Include this for malloc and free */
#include "dog.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
dog_t *my_dog;

my_dog = new_dog("Poppy", 3.5, "Bob");
if (my_dog == NULL)
{
printf("Failed to create a new dog\n");
return (1);
}

printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

/* Free allocated memory */
free(my_dog->name);
free(my_dog->owner);
free(my_dog);

return (0);
}
