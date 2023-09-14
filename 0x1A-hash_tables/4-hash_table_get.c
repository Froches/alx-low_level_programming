#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
	hash_node_t *current_node;
	unsigned long index;

	of the
