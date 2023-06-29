#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	if(head == NULL)
	{
		return;
	}
	else
	{
		if (head->next != NULL)
		{
			free_list(head->next);
			free(head);
		}
		
	}
}
