#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two str
 * @s1: the first str
 * @s2: the second str
 * Return: ptr
*/

char *str_concat(char *s1, char *s2)
{
	int g, l = 0;
	int c = 0;
	char *str_copy;

	while (s1[c])
	{
		c++;
	}

	while (s2[c])
	{
		c++;
	}
	str_copy= malloc(sizeof(char) * (c + 1));


	if (!str_copy)
		return (NULL);


	if (s1)
	{
		while (s1[l])
		{
			str_copy[g] = s1[l];
			g++;
			l++;
		}
	}

	l = 0;

	if (s2)
	{
		while (s2[l])
		{
			str_copy[g] = s2[l];
			g++;
			l++;
		}
	}

	return (str_copy);

}
