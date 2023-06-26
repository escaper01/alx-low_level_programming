#include "main.h"

/**
 * _puts - print string wit _putchar
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int cur = 0;

	while (str[cur] != '\0')
	{
		_putchar(str[cur]);
		cur++;
	}

	_putchar('\n');
}
