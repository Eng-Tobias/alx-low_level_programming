#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key to look for
 *
 * Return: The value associated with the key, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    /* Check for null input */
    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    /* Get the index for the key */
    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    /* Traverse the linked list at this index to find the key */
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }

    /* If the key was not found */
    return (NULL);
}
