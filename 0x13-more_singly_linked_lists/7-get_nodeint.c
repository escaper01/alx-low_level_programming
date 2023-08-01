#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 *@head: ptr to header
 *@index: searched index
 * Return: nth found elem
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *cursor = head;

	while (cursor != NULL)
	{
		if (counter == index)
			return (cursor);

		counter++;
		cursor = cursor->next;
	}

	return (NULL);
}
