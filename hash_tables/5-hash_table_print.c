#include <stdio.h>
#include "hash_tables.h"

void print_list(hash_node_t *head)
{
	printf("{");
	while(head != NULL)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->next != NULL)
		{
			printf(", ");
		}
		head = head->next;
	}
	printf("}\n");
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

	while (i < ht->size)
	{
		head = ht->array[i];
		i = i + 1;
		if (head == NULL)
		{
			continue;
		}
		print_list(head);
	}
}
