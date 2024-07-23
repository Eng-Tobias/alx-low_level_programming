#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
 @owner: owner of the dog
*
* Return: pointer to the new dog or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
size_t name_len, owner_len;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

name_len = strlen(name) + 1;
owner_len = strlen(owner) + 1;

dog->name = malloc(name_len);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = malloc(owner_len);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

strcpy(dog->name, name);
strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}
