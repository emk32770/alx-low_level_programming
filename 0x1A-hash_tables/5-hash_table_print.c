#include "hash_tables.h"

/**
  *hash_table_print - print a hash table
  *@ht: hash table
  *Return: 0 or void
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash_table;
	unsigned long int countNumber = 0;
	char flag = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (countNumber = 0; countNumber < ht->size; countNumber++)
	{
		if (ht->array[countNumber] != NULL)
		{
			if (flag == 1)
				printf(", ");
			hash_table = ht->array[countNumber];
			while (hash_table != NULL)
			{
				printf("'%s: '%s'", hash_table->key, hash_table->value);
				hash_table = hash_table->next;
				if (hash_table != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");

}
