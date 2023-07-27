#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elems
 *@h: ptr of linked list header
 *Return: lenght of linked list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
