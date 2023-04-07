#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array to create
 *
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->shead = new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value to add
 *
 * Return: 1 if success, 0 if failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp;
	unsigned long int index;

	if (!ht || !key || !value || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sort_hash_table(ht, new_node);
	return (1);
}

/**
 * sort_hash_table - sorts a hash table
 * @ht: pointer to the hash table
 * @new_node: node to be inserted and sorted
 */
void sort_hash_table(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL)
	{
		ht->shead = ht->stail = new_node;
		new_node->sprev = new_node->snext = NULL;
	}
	else
	{
		tmp = ht->shead;
		while (tmp)
		{
			if (strcmp(tmp->key, new_node->key) > 0)
			{
				new_node->sprev = tmp->sprev;
				new_node->snext = tmp;
				if (tmp->sprev)
					tmp->sprev->snext = new_node;
				else
					ht->shead = new_node;
				tmp->sprev = new_node;
				break;
			}
			tmp = tmp->snext;
		}
		if (tmp == NULL)
		{
			ht->stail->snext = new_node;
			new_node->sprev = ht->stail;
			new_node->snext = NULL;
			ht->stail = new_node;
		}
	}
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: key to look for
 *
 * Return: value associated with the element, or NULL if key was not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (!ht || !key || key[0] == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->snext)
			printf(", ");
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	tmp = ht->stail;
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->sprev)
			printf(", ");
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *tmp2;

	if (!ht)
		return;
	tmp = ht->shead;
	while (tmp)
	{
		tmp2 = tmp->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = tmp2;
	}
	free(ht->array);
	free(ht);
}
