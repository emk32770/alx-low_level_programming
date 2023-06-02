#include "hash_tables.h"


/**
  *hash_table_get - retrieves a value with a key
  *@ht: the hash_table self
  *@key: the key to look for
  *Return: char or 1
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int countNumber;
	hash_node_t *node_table;

	if (ht == NULL || key == NULL)
		return (NULL);

	countNumber = key_index((const unsigned char *)key,  ht->size);

if (countNumber >= ht->size)
{
	return (NULL);
}

	node_table = ht->array[countNumber];

	while (node_table && strcmp(node_table->key, key) != 0)
		node_table = node_table->next;

	return ((node_table == NULL) ? NULL : node_table->value);
}
