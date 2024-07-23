#ifndef DOG_H
#define DOG_H

/**
* struct dog - a structure to represent a dog
* @name: a pointer to a string representing the dog's name
* @age: a float representing the dog's age
* @owner: a pointer to a string representing the dog's owner
*/
struct dog {
char *name;
float age;
char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
