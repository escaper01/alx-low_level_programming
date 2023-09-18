#include "main.h"
/**
 * _strncpy - copies an str
 * @dest: destination str
 * @src: source str
 * @n: int limit.
 * Return: the copied str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
