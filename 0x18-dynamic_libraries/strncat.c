#include "main.h"

/**
 * _strncat - concatenates two strings with n limit
 * @dest: destination str
 * @src: source str
 * @n: int limit
 * Return: the res str
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;

	}
	dest[a] = '\0';

	return (dest);
}
