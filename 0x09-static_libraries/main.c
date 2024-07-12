#include "main.h"
#include <stdio.h>

int main(void)
{
char str[100] = "Hello";
_strcat(str, " World!");
printf("%s\n", str);
return (0);
}
