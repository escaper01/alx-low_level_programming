#include <stddef.h>
#include "lists.h"
#include <stdlib.h>


/**
 * add_node - add node to the start
 *@head: ptr of linked list header
 *@str: str of the added node
 *Return: ptr of linked list
*/

list_t *add_node(list_t **head, const char *str)
{

	unsigned int i;
	list_t *new;

	new  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}

	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;

	return (new);
}
