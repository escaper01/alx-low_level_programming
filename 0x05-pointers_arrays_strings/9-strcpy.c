#include "main.h"

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination
 * @src: source
 * Return: char with copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int cur;

	for (cur = 0; *(src + cur) != '\0'; cur++)
	{
		dest[cur] = *(src + cur);
	}
	dest[cur] = '\0';

	return (dest);
}
