#include "sorted_hash_table.h"

/* Hash function to calculate the index */
unsigned long int hash(const char *key, unsigned long int size) {
    unsigned long int hash_value = 0;
    while (*key) {
        hash_value += *key++;
    }
    return hash_value % size;
}

/* Function to create a sorted hash table */
shash_table_t *shash_table_create(unsigned long int size) {
    shash_table_t *ht = malloc(sizeof(shash_table_t));
    if (!ht) return NULL;

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (!ht->array) {
        free(ht);
        return NULL;
    }

    ht->shead = NULL;
    ht->stail = NULL;
    return ht;
}

/* Function to add an element to the sorted hash table */
int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
    unsigned long int index = hash(key, ht->size);
    shash_node_t *new_node = malloc(sizeof(shash_node_t));
    if (!new_node) return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (!ht->shead) {
        new_node->snext = NULL;
        new_node->sprev = NULL;
        ht->shead = new_node;
        ht->stail = new_node;
    } else {
        shash_node_t *current = ht->shead;
        while (current && strcmp(current->key, key) < 0) {
            current = current->snext;
        }

        if (!current) {
            ht->stail->snext = new_node;
            new_node->sprev = ht->stail;
            new_node->snext = NULL;
            ht->stail = new_node;
        } else if (current == ht->shead) {
            new_node->snext = ht->shead;
            new_node->sprev = NULL;
            ht->shead->sprev = new_node;
            ht->shead = new_node;
        } else {
            new_node->snext = current;
            new_node->sprev = current->sprev;
            current->sprev->snext = new_node;
            current->sprev = new_node;
        }
    }

    return 1;
}

/* Function to get an element from the sorted hash table */
char *shash_table_get(const shash_table_t *ht, const char *key) {
    unsigned long int index = hash(key, ht->size);
    shash_node_t *node = ht->array[index];

    while (node) {
        if (strcmp(node->key, key) == 0) {
            return node->value;
        }
        node = node->next;
    }

    return NULL;
}

/* Function to print the sorted hash table */
void shash_table_print(const shash_table_t *ht) {
    shash_node_t *current = ht->shead;
    printf("{");
    while (current) {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current) {
            printf(", ");
        }
    }
    printf("}\n");
}

/* Function to print the sorted hash table in reverse */
void shash_table_print_rev(const shash_table_t *ht) {
    shash_node_t *current = ht->stail;
    printf("{");
    while (current) {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current) {
            printf(", ");
        }
    }
    printf("}\n");
}

/* Function to delete the sorted hash table */
void shash_table_delete(shash_table_t *ht) {
    shash_node_t *current = ht->shead;
    while (current) {
        shash_node_t *temp = current;
        current = current->snext;
        free(temp->key);
        free(temp->value);
        free(temp);
    }
    free(ht->array);
    free(ht);
}
