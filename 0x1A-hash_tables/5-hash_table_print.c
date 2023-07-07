#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL;
	unsigned long int sz;
	int flag = 0;

	if (ht == NULL)
		return;
	sz = ht->size;
	printf("{");
	for (i = 0; i < sz; i++)/*iterate the index table*/
	{
		temp = ht->array[i];
		while (temp != NULL)/* iterate the linked list in the key */
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
