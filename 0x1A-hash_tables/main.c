#include "sorted_hash_table.h"

int main(void) {
    shash_table_t *ht = shash_table_create(1024);

    shash_table_set(ht, "name", "Alice");
    shash_table_set(ht, "age", "30");
    shash_table_set(ht, "city", "New York");

    printf("Sorted Hash Table:\n");
    shash_table_print(ht);

    printf("Reverse Sorted Hash Table:\n");
    shash_table_print_rev(ht);

    /* Clean up */
    shash_table_delete(ht);
    return 0;
}
