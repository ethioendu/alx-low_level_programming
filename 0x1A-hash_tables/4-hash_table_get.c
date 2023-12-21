#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associatedwith
 *                   a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: the key to get the value .
 *
 * Return: If the key cannot be matched - NULL.
 *        Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
