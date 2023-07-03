#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: points to the head of the list
 * @n: the node content
 * Return: a new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *current;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = NULL;
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			current = *head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			current->next = node;
		}
		return (node);
	}
}
