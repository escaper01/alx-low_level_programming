#include "main.h"

/**
* _strstr - function locates a substring
* @haystack: ptr to char
* @needle: ptr to char
* Return: ptr to result or null
*/

char *_strstr(char *haystack, char *needle)
{
	char *haystack_copy = haystack;
	char *needle_copy = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}

		if (!*needle)
		{
			return (haystack_copy);
		}

		needle = needle_copy;
		haystack_copy++;
		haystack = haystack_copy;
	}

	return (0);
}
