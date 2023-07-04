#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: the linked list
 * Return: the node content
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (head == NULL)
	{
		return (0);
	}
	if ((*head)->next != NULL)
	{
		tmp = (*head)->next;
	}
	data = (*head)->n;
	free(*head);
	*head = tmp;
	return (data);

}
