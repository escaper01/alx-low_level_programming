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
	if (grid != NULL && height != 0)
	{
		int i;
		for (i=0; i < height ;height++)
		{
			free(grid[height]);
		}

		free(grid);
	}
}
