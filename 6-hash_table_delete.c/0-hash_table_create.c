#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create -  this funtion create the hash table
 * @size: this is the size of the hash table
 * Return: A pointer to newly created hash table is it fails return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size == 0)
	{
		return (NULL);
	}
	
	hash_table_t *node = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->array = malloc(sizeof(hash_node_t *) * size);
	if (node->array == NULL)
	{
		free(node);
		return (NULL);
	}

	node->size = size;
	for (int f = 0; f < size; f++)
	{
		node->array[f] = NULL;
	}
	return (node);
}
