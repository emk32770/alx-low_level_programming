#include "hash_tables.h"


/**
  *hash_table_delete - delete hash table
  *@ht: the hash table
  *Return: Nothing
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int countNumber;
	hash_node_t *hash_table;
	hash_node_t *table_1;

	if (ht == NULL)
		return;

	for (countNumber = 0; ht->size; countNumber++)
	{
		if (ht->array[countNumber] != NULL)
		{
			hash_table = ht->array[countNumber];
			while (hash_table != NULL)
			{

				table_1 = hash_table->next;
				free(hash_table->key);
				free(hash_table->value);
				free(hash_table);
				hash_table = table_1;
			}
		}
	}
    free(ht->array);
	free(ht);
	return; 
}
