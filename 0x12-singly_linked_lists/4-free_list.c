#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free up memory allocations of linked lists
 *@head: ptr of linked list header
 *Return: lenght of linked list
*/

void free_list(list_t *head)
{
	list_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		free(temp->str);
		free(temp);
	}
}
