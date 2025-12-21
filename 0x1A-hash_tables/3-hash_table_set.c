#include "hash_tables.h"
int replace_value(hash_node_t *node, const char *key, const char *value);

/**
 * hash_table_set - adds an element to a hash table
 * @ht: hash table to add or update to
 * @key: key to be hashed
 * @value: value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key || !value || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if ((replace_value(ht->array[index], key, value)) == 1)
		return (1);

	new_node = malloc(sizeof(hash_node_t));
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

	return (1);
}

/**
 * replace_value - Replaces the value associated with a given key in a
 *                 hash node list.
 * @node: Pointer to the head of the hash node linked list.
 * @key: The key whose value should be replaced.
 * @value: The new value to associate with the key.
 *
 * Return: 1 if the value was successfully replaced, 0 otherwise.
 */
int replace_value(hash_node_t *node, const char *key, const char *value)
{
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (!new_value)
				return (0);
			free(node->value);
			node->value = new_value;
			return (1);
		}
		node = node->next;
	}

	return (0);
}
