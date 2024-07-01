/**
* _strcpy - Copies the string pointed to by src, including the null byte,
*           to the buffer pointed to by dest.
* @dest: The buffer to copy the string to.
* @src: The source string to copy.
*
* Return: The pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0'; /* Don't forget to copy the null byte */

return dest;
}
