#include "hash_tables.h"
/**
 * key_index -  this prototype is used ti find the index of the key
 * @key: this is the key
 * @size: this is the size of the hash table
 * Return: the index at which the key/value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n = 0; /*n is the hash value*/
	if (!size || key == NULL)
	{
		return (0);
	}

	n =  hash_djb2(key);
	return (n % size);
}
