#include "main.h"

char *_strcat(char *dest, char *src)
{
char *d = dest;

while (*d)
d++;
while (*src)
*d++ = *src++;
*d = '\0';

return (dest);
}
