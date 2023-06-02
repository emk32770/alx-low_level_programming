#include "hash_tables.h"


/**
  *hash_table_set - add an element to the hash table
  *@ht: the hash table
  *@key: ke
  *@value: value
  *Return: 0
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* new value to set */
	char *new_value;
	unsigned long int countNumber;
	unsigned long int countNumber1;
	hash_node_t *newHashTable;

	if (ht == NULL || *key == '\0' || value == NULL || key == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	countNumber = key_index((const unsigned char *)key, ht->size);
	for (countNumber1 = countNumber; ht->array[countNumber1]; countNumber1++)
	{
		if (strcmp(ht->array[countNumber1]->key, key) == 0)
		{
			free(ht->array[countNumber1]->value);
			ht->array[countNumber1]->value = new_value;
			return (1);
		}
	}
	newHashTable = malloc(sizeof(hash_node_t *));
	if (newHashTable == NULL)
	{
		free(new_value);
		return (0);
	}

	newHashTable->key = strdup(key);
	if (newHashTable->key == NULL)
	{
		free(newHashTable);
		return (0);
	}
	newHashTable->value = new_value;
	newHashTable->next = ht->array[countNumber];
	ht->array[countNumber] = newHashTable;
	return (1);
}
