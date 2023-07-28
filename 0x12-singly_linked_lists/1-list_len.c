#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * list_len - get num of items
 *@h: ptr of linked list header
 *Return: lenght of linked list
*/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
