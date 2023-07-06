#include "main.h"

/**
 * _strlen_recursion - return len of an str
 * @s: str
 * Return: int - len
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;

	return (1 + _strlen_recursion(s + 1));
}
