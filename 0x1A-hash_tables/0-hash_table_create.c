#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"


/**
   * hash_table_create - create a hash table
   *@size: the size of the array
   *Return: return pointer
   */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int countNumber;
	hash_table_t *table_hash;

	table_hash = malloc(sizeof(hash_table_t));

	if (table_hash == NULL)
	{
		return (NULL);
	}
	table_hash->size = size;

	table_hash->array = malloc(size * sizeof(hash_node_t *));

	if (table_hash->array == NULL)
	{
		free(table_hash);
		return (NULL);
	}

	for (countNumber = 0; countNumber < size; countNumber++)
	{
		table_hash->array[countNumber] = NULL;
	}

	return (table_hash);

}
