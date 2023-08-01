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
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
