#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    
    if (hash_table_set(ht, "betty", "cool") == 1)
        printf("Added key: 'betty', value: 'cool'\n");
    else
        printf("Failed to add 'betty'\n");

    if (hash_table_set(ht, "hetairas", "test1") == 1)
        printf("Added key: 'hetairas', value: 'test1'\n");
    else
        printf("Failed to add 'hetairas'\n");

    if (hash_table_set(ht, "mentioner", "test2") == 1)
        printf("Added key: 'mentioner', value: 'test2'\n");
    else
        printf("Failed to add 'mentioner'\n");

    return (EXIT_SUCCESS);
}
