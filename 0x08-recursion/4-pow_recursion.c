#include "main.h"

/**
 * _pow_recursion - raise x to the pow of y
 * @x: num x
 * @y: num y
 * Return: int - num
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 1)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
