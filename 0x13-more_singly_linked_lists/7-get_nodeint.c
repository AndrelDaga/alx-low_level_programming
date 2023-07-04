#include "lists.h"
/**
 * get_nodeint_at_index - returns the node of a linked list
 * @head: the head of the list
 * @index: the index
 * Return: return the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	listint_t *current;

	current = head;
	count = 0;
	while (current->next != NULL)
	{
		current = current->next;
		count++;
	}
	count += 1;
	if (index > count - 1)
	{
		return (NULL);
	}
	else
	{
		current = head;
		count = 0;
		while (count < index)
		{
			current = current->next;
			count++;
		}
		return (current);
	}
}
