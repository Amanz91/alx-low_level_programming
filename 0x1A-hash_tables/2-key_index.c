#include "hash_tables.h"
/**
 * key_index - A func to get the index of a key.
 * @key: where key is
 * @size: size of array of hash table.
 * Return: The index of key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
