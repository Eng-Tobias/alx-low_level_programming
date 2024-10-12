/* hash_functions.c */
#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int c;

    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = hash_djb2(key);
    return (hash % size);
}
