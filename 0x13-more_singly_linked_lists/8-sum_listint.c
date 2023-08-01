#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - sum all data's node
 *@head: node's head
 * Return: sum of all nodes data n
 */
int sum_listint(listint_t *head)
{

	listint_t *cursor = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (cursor != NULL)
	{
		/* code */
		sum += cursor->n;
		cursor = cursor->next;
	}

	return (sum);
}
