#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - Creates a new sorted hash node.
 * @key: The key of the node.
 * @value: The value of the node.
 * Return: A pointer to the new node, or NULL on failure.
 */
shash_node_t *create_node(const char *key, const char *value)
{
    shash_node_t *new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return (NULL);
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;
    new_node->sprev = NULL;
    new_node->snext = NULL;
    return (new_node);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: The hash table.
 * @key: The key of the element.
 * @value: The value of the element.
 * Return: 1 if succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *current;

    if (!ht || !key || !*key || !value)
        return (0);

    index = hash_djb2((unsigned char *)key) % ht->size;

    current = ht->array[index];

    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (1);
        }
        current = current->next;
    }

    new_node = create_node(key, value);
    if (!new_node)
        return (0);

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (!ht->shead)
    {
        ht->shead = new_node;
        ht->stail = new_node;
    }
    else
    {
        shash_node_t *temp = ht->shead;
        while (temp && strcmp(temp->key, key) < 0)
            temp = temp->snext;

        if (!temp)
        {
            ht->stail->snext = new_node;
            new_node->sprev = ht->stail;
            ht->stail = new_node;
        }
        else
        {
            new_node->snext = temp;
            new_node->sprev = temp->sprev;
            if (temp->sprev)
                temp->sprev->snext = new_node;
            else
                ht->shead = new_node;
            temp->sprev = new_node;
        }
    }

    return (1);
}

/**
 * shash_table_print - Prints the sorted hash table in order.
 * @ht: The hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;

    if (!ht)
        return;

    current = ht->shead;
    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order.
 * @ht: The hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;

    if (!ht)
        return;

    current = ht->stail;
    printf("{");
    while (current)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current)
            printf(", ");
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current, *temp;

    if (!ht)
        return;

    current = ht->shead;
    while (current)
    {
        temp = current;
        current = current->snext;
        free(temp->key);
        free(temp->value);
        free(temp);
    }
    free(ht->array);
    free(ht);
}
