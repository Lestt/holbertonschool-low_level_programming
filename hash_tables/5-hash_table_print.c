#include <stdio.h>
#include "hash_tables.h"

void print_list(hash_node_t *head)
{
	while(head != NULL)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->next != NULL)
		{
			printf(", ");
		}
		head = head->next;
	}
}

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;

	i = 0;
	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		head = ht->array[i];
		if (head != NULL)
		{
			print_list(head);
		}
		i = i + 1;
	}
	printf("}\n");
}
