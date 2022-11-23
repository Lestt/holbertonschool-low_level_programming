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
		return (NULL);
	}

	return (h);
}
