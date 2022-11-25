#include <stdio.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h = malloc(sizeof(*h));

	if (h == NULL)
	{
		return (NULL);
	}

	h->size = size;
	h->array = malloc(sizeof(*(h->array)) * size);

	if (h->array == NULL)
	{
		free(h);
		return (NULL);
	}

	size = size - 1;
	while (size != 0)
	{
		h->array[size] = NULL;
		size = size - 1;
	}
	h->array[size] = NULL;

	return (h);
}
