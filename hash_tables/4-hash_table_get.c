#include <string.h>
#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned long int index;

	if (ht == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while(head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}
