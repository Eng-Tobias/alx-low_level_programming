#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stddef.h>

/**
 * struct shash_node_s - Node of a sorted hash table
 * @key: The key of the node
 * @value: The value of the node
 * @next: A pointer to the next node in the hash table
 * @sprev: A pointer to the previous sorted node
 * @snext: A pointer to the next sorted node
 */
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table
 * @size: The size of the array
 * @array: An array of pointers to the first node of each linked list
 * @shead: A pointer to the first sorted node
 * @stail: A pointer to the last sorted node
 */
typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

unsigned long int hash_djb2(const unsigned char *str);

#endif /* HASH_TABLES_H */
