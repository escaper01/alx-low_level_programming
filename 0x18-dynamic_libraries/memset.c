#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: array of chars
 * @b: constant byte
 * @n: num of empty space to fill
 * Return: pointer to array of chars.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
