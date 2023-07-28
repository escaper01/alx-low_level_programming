#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - print num of elements
 *@head: ptr of linked list header
 *@str: str of the added node
 *Return: ptr of linked list
*/

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *new;
	list_t *temp;

	new  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = new;
		new->len = i;
		new->str = strdup(str);
		new->next = NULL;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	return (new);

}
