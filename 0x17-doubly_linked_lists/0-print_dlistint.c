#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
		len++;
	}
	return (len);
}
