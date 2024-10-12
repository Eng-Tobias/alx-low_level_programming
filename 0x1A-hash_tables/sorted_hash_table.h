#ifndef SORTED_HASH_TABLE_H
#define SORTED_HASH_TABLE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Struct definitions */
typedef struct shash_node_s {
    char *key;
    char *value;
    struct shash_node_s *next; /* for hash table chaining */
    struct shash_node_s *snext; /* for sorted linked list */
    struct shash_node_s *sprev; /* for sorted linked list */
} shash_node_t;

typedef struct shash_table_s {
    unsigned long int size;
    shash_node_t **array; /* array of pointers to the hash table nodes */
    shash_node_t *shead; /* pointer to the first node of the sorted linked list */
    shash_node_t *stail; /* pointer to the last node of the sorted linked list */
} shash_table_t;

/* Function prototypes */
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* SORTED_HASH_TABLE_H */
