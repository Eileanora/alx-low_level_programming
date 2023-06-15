#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data in list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->data;
		temp = temp->next;
	}
	return (sum);
}
