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
	int c = 0;
	while (s1[c])
	{
		c++;
	}
	char *str_copy = malloc(sizeof(char) * (c + 1));

	int n = 0;
	while (s2[c])
	{
		n++;
	}
	char *str_copy = malloc(sizeof(char) * (n + 1));

	// char *s = malloc(sizeof(s1) + sizeof(s2));
	int g, l = 0;

	if (!s)
		return (NULL);


	if (s1)
	{
		while (s1[l])
		{
			s[g] = s1[l];
			g++;
			l++;
		}
	}

	l = 0;

	if (s2)
	{
		while (s2[l])
		{
			s[g] = s2[l];
			g++;
			l++;
		}
	}

	return (s);

}
