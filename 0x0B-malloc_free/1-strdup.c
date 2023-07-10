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
	int cur = 0;
	char *str_copy = malloc(sizeof(str));

	if (!str)
		return (NULL);


	if (!str_copy)
		return (NULL);


	while (str[cur])
	{
		str_copy[cur] = str[cur];
		cur++;
	}

	return (str_copy);
}
