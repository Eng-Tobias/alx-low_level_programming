#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>  /* for malloc and free */

void *malloc_checked(unsigned int b);
int _putchar(char c);  /* Example declaration of _putchar */
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /* MAIN_H */
