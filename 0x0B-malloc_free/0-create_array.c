#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an arr of char and init it
 * @size: arr len
 * @c: init char
 * Return: ptr
*/

char *create_array(unsigned int size, char c)
{
	if (!size)
		return (NULL);

	char *arr = malloc(sizeof(char) * size);

	if (!arr)
		return (NULL);

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

