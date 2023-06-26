#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int cur = 0;

	while (s[cur] != '\0')
	{
		cur++;
	}

	return (cur);
}
