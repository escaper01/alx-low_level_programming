#include "main.h"
/**
 * _strcmp - compares two str
 * @s1: first str
 * @s2: second str
 * Return: 0 if s1 and s2 are eq pr other num
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, res = 0;

	while (res == 0)
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			break;
		res = s1[i] - s2[i];
		i++;
	}

	return (res);
}
