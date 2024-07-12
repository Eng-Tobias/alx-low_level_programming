#include "main.h"
#include <unistd.h>  /* Include the declaration for write */

/**
* _putchar - Writes a character to stdout
* @c: The character to print
*
* Return: On success 1.
*         On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
/* Using the write system call to write character c to stdout */
return write(1, &c, 1);
}
