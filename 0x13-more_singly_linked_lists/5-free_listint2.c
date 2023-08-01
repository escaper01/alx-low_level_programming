#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t and set head to NULL
 *@head: ptr of a ptr's head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cursor = *head;
	listint_t *tmp;

	while (cursor != NULL)
	{
		tmp = cursor->next;
		free(cursor);
		cursor = tmp;
	}

	*head = NULL;
}
