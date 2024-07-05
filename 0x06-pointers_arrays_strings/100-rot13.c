/**
* rot13 - Encodes a string using ROT13 cipher.
* @s: The string to be encoded.
*
* Return: Pointer to the encoded string.
*/
char *rot13(char *s)
{
char *ptr = s;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13_alphabet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i;

while (*ptr != '\0')
{
for (i = 0; i < 52; i++)
{
if (*ptr == alphabet[i])
{
*ptr = rot13_alphabet[i];
break;
}
}
ptr++;
}

return (s);
}
