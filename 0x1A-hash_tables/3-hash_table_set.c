#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: The hash table to add or update the key/value in
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (must be duplicated)
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp;
    char *value_copy;

    if (!ht || !key || *key == '\0' || !value)
        return (0);

    value_copy = strdup(value);
    if (!value_copy)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists and update its value */
    temp = ht->array[index];
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value); /* Free the old value */
            temp->value = value_copy; /* Update with the new value */
            return (1);
        }
        temp = temp->next;
    }

    /* Create a new node if the key wasn't found */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
    {
        free(value_copy);
        return (0);
    }

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(value_copy);
        free(new_node);
        return (0);
    }
    new_node->value = value_copy;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
