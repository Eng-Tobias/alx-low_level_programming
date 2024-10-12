#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht = malloc(sizeof(shash_table_t));
    if (!ht)
        return NULL;

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    ht->shead = NULL;
    ht->stail = NULL;

    return ht;
}

/**
 * shash_table_set - Adds or updates a key/value pair in the hash table.
 * @ht: The hash table to update.
 * @key: The key to add or update.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *temp;

    if (!ht || !key || !value)
        return 0;

    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];

    /* Check for existing key */
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            return 1;
        }
        temp = temp->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    /* Insert into sorted linked list */
    if (!ht->shead || strcmp(new_node->key, ht->shead->key) < 0)
    {
        new_node->snext = ht->shead;
        new_node->sprev = NULL;
        if (ht->shead)
            ht->shead->sprev = new_node;
        ht->shead = new_node;
        if (!ht->stail)
            ht->stail = new_node;
    }
    else
    {
        temp = ht->shead;
        while (temp->snext && strcmp(temp->snext->key, new_node->key) < 0)
            temp = temp->snext;

        new_node->snext = temp->snext;
        new_node->sprev = temp;
        temp->snext = new_node;

        if (new_node->snext)
            new_node->snext->sprev = new_node;
        else
            ht->stail = new_node;
    }

    return 1;
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table.
 * @key: The key to look up.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *temp;

    if (!ht || !key)
        return NULL;

    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];

    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
            return temp->value;
        temp = temp->next;
    }

    return NULL;
}

/**
 * shash_table_print - Prints the hash table in sorted order.
 * @ht: The hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *temp;

    if (!ht)
        return;

    temp = ht->shead;
    printf("{");
    while (temp)
    {
        printf("'%s': '%s'", temp->key, temp->value);
        temp = temp->snext;
        if (temp)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table in reverse order.
 * @ht: The hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *temp;

    if (!ht)
        return;

    temp = ht->stail;
    printf("{");
    while (temp)
    {
        printf("'%s': '%s'", temp->key, temp->value);
        temp = temp->sprev;
        if (temp)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes the hash table and frees memory.
 * @ht: The hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *temp, *next;

    if (!ht)
        return;

    temp = ht->shead;
    while (temp)
    {
        next = temp->snext;
        free(temp->key);
        free(temp->value);
        free(temp);
        temp = next;
    }

    free(ht->array);
    free(ht);
}
