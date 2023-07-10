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
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);


	if (!size)
		return (NULL);


	if (!arr)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

