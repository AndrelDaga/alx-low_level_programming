#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	
	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
}
