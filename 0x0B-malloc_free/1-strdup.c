#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - create an str copy
 * @str: the given str
 * Return: ptr
*/

char *_strdup(char *str)
{
	if (!str)
		return (NULL);

	char *str_copy = malloc(sizeof(str));

	if (!str_copy)
		return (NULL);

	int cur = 0;

	while (str[cur])
	{
		str_copy[cur] = str[cur];
		cur++;
	}

	return (str_copy);
}
