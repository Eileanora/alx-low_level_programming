#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *temp = NULL;
	unsigned long int sz;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	sz = ht->size;
	index = key_index((const unsigned char *)key, sz);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			delete_node(new_node);
			return (1);
		}
		temp = temp->next;
	}
	temp->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * delete_node - deletes a node
 * @node: node to delete
 * Return: void
*/
void delete_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
