#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int cur;

	cur = 0;
	while (str[cur] != '\0')
	{
		if (cur % 2 == 0)
			_putchar(str[cur]);
		cur++;
	}
	_putchar('\n');
}
