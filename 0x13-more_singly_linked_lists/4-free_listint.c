#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t
 *@head: ptr to a header
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *cursor = head;
	listint_t *tmp;

	while (cursor != NULL)
	{
		tmp = cursor->next;
		free(cursor);
		cursor = tmp;
	}
}
