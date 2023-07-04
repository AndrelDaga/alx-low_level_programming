#include "lists.h"
/**
 * sum_listint - returns the sum of all the data in the list
 * @head: head of the list
 * Return: the sum of data
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	current = head;
	sum = 0;
	if (current == NULL)
	{
		return (0);
	}
	while (current->next != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	sum += current->n;
	return (sum);
}
