#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its contents.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht) {
    unsigned long int i;
    hash_node_t *current_node, *temp_node;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++) {
        current_node = ht->array[i];
        while (current_node != NULL) {
            temp_node = current_node->next;
            free(current_node->key);
            free(current_node->value);
            free(current_node);
            current_node = temp_node;
        }
    }

    free(ht->array);
    free(ht);
}
