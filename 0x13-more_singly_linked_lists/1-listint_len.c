#include <stddef.h>
#include "lists.h"

/**
 * listint_len - get num of nodes
 *@h: ptr of the head's node
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
