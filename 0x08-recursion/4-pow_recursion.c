#include "main.h"

/**
 * _pow_recursion - raise x to the pow of y
 * @x: num x
 * @y: num y
 * Return: int - num
 */

int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);

	if (!y)
		return (1);

	res = _pow_recursion(x, y - 1);

	return (res * x);
}
