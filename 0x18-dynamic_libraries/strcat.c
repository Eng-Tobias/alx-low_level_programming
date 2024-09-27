char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    while (*ptr) ptr++;
    while (*src) {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}
