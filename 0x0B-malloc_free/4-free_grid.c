#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the prev 2d arr
 * @grid: the prev 2d arr
 * @height: hight
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
