#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the number of elements in a list_t list
 * @h: a linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *current;

	count = 1;
	current = h;

	while (current->next != 0)
	{
		current = current->next;
		count++;
	}
	current = h;
	return (count);
}
