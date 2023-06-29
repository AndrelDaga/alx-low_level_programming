#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a node at the beginning of a list_t list
 * @head: the head of the list
 * @str: a string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if(node == NULL)
	{
		return NULL;
	}
	else
	{
		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return NULL;
		}
		else
		{
			node->len = strlen(str);
			node->next = *head;

			*head = node;
			return (node);
		}
	}
}
