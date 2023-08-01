#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a particular place
 *@idx: index
 *@n: new node 's data
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cursor = *head;
	listint_t *prev_node = NULL;
	listint_t *new_node;
	unsigned int counter = 0;

	while (cursor != NULL)
	{

		if (idx == counter)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
			{
				return (NULL);
			}
			prev_node->next = new_node;
			new_node->next = cursor;
			new_node->n = n;
		}
		counter++;
		prev_node = cursor;
		cursor = cursor->next;
	}

	return (NULL);
}
