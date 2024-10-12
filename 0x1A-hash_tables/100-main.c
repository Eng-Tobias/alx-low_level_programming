#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;
    char *value1;
    char *value2;

    ht = hash_table_create(1024);
    if (ht == NULL)
    {
        fprintf(stderr, "Error creating hash table\n");
        return (1);
    }

    /* Testing adding key-value pairs */
    if (shash_table_set(ht, "key1", "value1") == 0)
    {
        printf("Error adding key1\n");
    }
    if (shash_table_set(ht, "key2", "value2") == 0)
    {
        printf("Error adding key2\n");
    }

    /* Testing retrieving values */
    value1 = shash_table_get(ht, "key1");
    if (value1 != NULL)
    {
        printf("Retrieved key1: %s\n", value1);
    }
    else
    {
        printf("Key1 not found\n");
    }

    value2 = shash_table_get(ht, "key2");
    if (value2 != NULL)
    {
        printf("Retrieved key2: %s\n", value2);
    }
    else
    {
        printf("Key2 not found\n");
    }

    /* Testing printing the hash table */
    printf("Current hash table:\n");
    shash_table_print(ht);

    /* Cleanup */
    shash_table_delete(ht);
    return (0);
}
