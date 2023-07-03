#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked 
 * listin_t list
 * @h: the list
 * Return: an integer
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *current;

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
