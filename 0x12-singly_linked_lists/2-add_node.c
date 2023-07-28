#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add node to the start
 *@head: ptr of linked list header
 *@str: str of the added node
 *Return: ptr of linked list
*/

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node;

	new_node  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		new_node->str = NULL;
		new_node->len = 0;
		new_node->next = *head;
	}

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;

	return (new_node);
}
