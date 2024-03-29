#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: a linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *current;
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
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			current = current->next;
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
			current = current->next;
		}
	}
	return (count);
}
