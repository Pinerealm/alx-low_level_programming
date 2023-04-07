#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i = 0;
	hash_node_t *tmp;
	int to_print = 0;

	if (ht == NULL)
		return;
	printf("{");

	while (i < ht->size)
	{
		tmp = ht->array[i++];
		while (tmp != NULL)
		{
			if (to_print == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			to_print = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
