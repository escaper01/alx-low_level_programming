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
	char *res;
	int i = 0, j = 0, m, k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	k = i + j + 1;
	res = malloc(k * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (m = 0; m < i; m++)
	{
		res[m] = s1[m];
	}

	for (m = 0; m <= j; m++)
	{
		res[m + i] = s2[m];
	}

	return (res);
}
