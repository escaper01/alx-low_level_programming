#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - remove the head
 *@head: ptr of ptr'S head
 * Return: the head'S data n
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int tmp;

	if (*head == NULL)
		return (0);

	next_node = (*head)->next;
	tmp = (*head)->n;
	free(*head);
	*head = next_node;

	return (tmp);
}
