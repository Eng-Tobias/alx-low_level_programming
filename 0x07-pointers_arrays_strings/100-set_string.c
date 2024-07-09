#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: pointer to a pointer to a char (double pointer)
* @to: pointer to a char (string to set s to)
*
* Description: The function sets the value of 's' to point to the string
*              where 'to' is pointing.
*/
void set_string(char **s, char *to)
{
*s = to;
}
