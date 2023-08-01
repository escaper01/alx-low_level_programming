#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a particular idx
 *@head: ptr of ptr's hear
 *@index: reomved node idx
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node = NULL;
	listint_t *cursor = *head;
	unsigned int counter = 0;

	while (cursor != NULL)
	{
		if (counter == index)
		{
			if (cursor->next == NULL)
			{
				prev_node->next = NULL;
				free(cursor);
				return (1);
			}

			prev_node->next = cursor->next;
			free(cursor);
			return (1);
		}

		prev_node = cursor;
		cursor = cursor->next;
		counter++;
	}

	return (-1);
}
