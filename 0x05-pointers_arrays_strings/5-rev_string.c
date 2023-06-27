#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, m, h;
	char ff, ll;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	m = i - 1;
	h = m / 2;
	while (h >= 0)
	{
		ff = s[m - h];
		ll = s[h];
		s[h] = ff;
		s[m - h] = ll;
		h--;
	}
}
