#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: array search
 * @c: char that'S looked for
 * Return: pointer to first occurent
*/

char *_strchr(char *s, char c)
{

	if (*s == '\0')
	{
		return (s);
	}
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
