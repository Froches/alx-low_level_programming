#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value assocoated with a key
 * @ht: The hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated with the element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long index;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}
	return (NULL);
}
