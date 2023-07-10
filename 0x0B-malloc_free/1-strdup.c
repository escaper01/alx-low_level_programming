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
	int c = 0;
	char *str_copy;

	while (str[c])
	{
		c++;
	}

	if (!str)
		return (NULL);
	str_copy = malloc(sizeof(char) * (c + 1));



	if (!str_copy)
		return (NULL);


	while (str[cur])
	{
		str_copy[cur] = str[cur];
		cur++;
	}

	return (str_copy);
}
