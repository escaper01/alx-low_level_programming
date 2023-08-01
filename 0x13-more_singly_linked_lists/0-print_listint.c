#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elem
 *@h: ptr of the head's node
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
