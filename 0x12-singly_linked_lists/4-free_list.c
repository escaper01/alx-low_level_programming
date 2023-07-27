#include "lists.h"

/**
 * free_list - free up memory allocations of linked lists
 *@head: ptr of linked list header
 *Return: lenght of linked list
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
