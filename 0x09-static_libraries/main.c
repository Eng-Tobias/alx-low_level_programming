/* main.c */

#include "main.h"  /* Include the header file where your functions are declared */

int main(void)
{
char dest[50] = "Hello ";
char *src = "world!";

_strcat(dest, src);  /* Call your _strcat function from the static library */

printf("%s\n", dest);  /* Print the concatenated string */

 return 0;
}
