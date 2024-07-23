#include <stddef.h>  /* For NULL */
#include <stdlib.h>  /* For exit() if needed */
#include "dog.h"

/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to the struct dog to initialize
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
