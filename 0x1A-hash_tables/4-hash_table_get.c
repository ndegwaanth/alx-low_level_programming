#include "hash_tables.h"
/**
 * hash_table_get - this prototype retrieves value associated with the key
 * @ht: this is the hash table to find the value associate with the key
 * @key: specific key to find
 * Return: the value associated with element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;
	if (!ht || key == NULL)
	{
		return 0;
	}

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while(current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return current_node->value;
		current_node = current_node->next;
	}

	return NULL;
}
