#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the listint_t list
 * Return: the number of nodes (i.e an int)
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *current;
	size_t i;

	count = 1;
	current = h;

	while (current->next != 0)
	{
		current = current->next;
		count++;
	}
	current = h;
	for (i = 0; i < count; i++)
	{
			printf("%u\n", current->n);
			current = current->next;
	}
	return (count);
}
