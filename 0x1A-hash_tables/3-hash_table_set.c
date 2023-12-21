#include "hash_tables.h"

/**
 *hash_table_set - Add an elemenet it to the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add.
 * @value: The value associated with key.
 *
 * Return: if it succeeded - 1.
 *         Otherwise - 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_added;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_added = strdup(value);
	if (value_added == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_added;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_added);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_added;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
