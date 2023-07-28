#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elems
 *@h: ptr of linked list header
 *Return: lenght of linked list
*/

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
