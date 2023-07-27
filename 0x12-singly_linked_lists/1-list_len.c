#include "lists.h"

/**
 * list_len - get num of items
 *@h: ptr of linked list header
 *Return: lenght of linked list
*/

size_t list_len(const list_t *h)
{
	const list_t *cursor;
	unsigned int i = 0;

	cursor = h;
	while (cursor)
	{
		i++;
		cursor = cursor->next;
	}
	return (i);
}
