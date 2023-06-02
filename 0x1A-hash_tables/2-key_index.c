#include "hash_tables.h"


/**
  *key_index - print index
  *@key:  Key of string
  *@size: size of the array
  *Return: integer
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key)  % size);
}
