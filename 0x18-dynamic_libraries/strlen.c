/* strlen.c */
int _strlen(char *s) {
    int len = 0;
    while (s[len]) len++;
    return len;
}
