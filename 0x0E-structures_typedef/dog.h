#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure to define a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: This structure defines a dog with its name, age, and owner.
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
