#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *str;
const char t_args[] = "cifs";
char *separator = "";

va_start(args, format);
while (format && format[i])
{
j = 0;
while (t_args[j])
{
if (format[i] == t_args[j])
{
printf("%s", separator);
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
separator = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}

