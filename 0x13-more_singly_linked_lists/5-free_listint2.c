#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a linked list
 * @: a pointer to a pointer to the head
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
	*head = NULL;
}
