#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: str destination
 * @src: str source
 * Return: the copied str
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	return (dest);
}
