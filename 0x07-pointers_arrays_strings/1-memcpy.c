#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination array
 * @src: array source
 * @n: num of bytes to copy
 * Return: pointer to dest array
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}