#include <strings.h>
#include <stdio.h>
#include "hash_tables.h"

hash_node_t *search_key(hash_node_t *head, const char *key)
{
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head);
		}
	}
	return (NULL);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *collision;
	hash_node_t *node_with_same_key;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	exit(1);
	index = key_index((const unsigned char *)key, ht->size);
	printf("%ld\n", index);
	exit(1);
	collision = ht->array[index];
	node_with_same_key = search_key(collision, key);

	if (node_with_same_key != NULL)
	{
		free(node_with_same_key->value);
		node_with_same_key->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(*new));
	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = collision;

	if (collision == NULL)
	{
		ht->array[index] = new;
	}

	return (1);
}
