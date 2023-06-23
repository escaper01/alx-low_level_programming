#include "main.h"

/**
 * print_square - print a square of size S
 * @size: size of the square
 * DEscription: shuf tani lfuq
 * Return: void
 */
void print_square(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
