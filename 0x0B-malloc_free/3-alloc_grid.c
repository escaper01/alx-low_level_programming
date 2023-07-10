#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create 2d arr
 * @width: W
 * @height: h
 * Return: ptr
*/
int **alloc_grid(int width, int height)
{
	int **arr = malloc(sizeof(int *) * width);
	int m;
	int i, j;


	if (width <= 0 || height <= 0)
		return (NULL);

	if (!arr)
		return (NULL);

	for (m = 0; m < width; m++)
	{
		arr[m] = malloc(sizeof(int) * height);
		if (!arr[m])
			return (NULL);
	}


	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
