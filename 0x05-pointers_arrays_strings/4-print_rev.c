#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int cur = 0;

	while (s[cur] != '\0')
	{
		cur++;
	}
	cur--;
	while (cur >= 0)
	{
		_putchar(s[cur]);
		cur--;
	}
	_putchar('\n');
}
