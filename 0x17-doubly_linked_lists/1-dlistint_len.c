#include "lists.h"
/**
 * dlistint_len - returns length of a linked list
 * @h: header
 * Return: length of the linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
