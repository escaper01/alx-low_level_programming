#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - mul two numbers
 * @argc: size of argv
 * @argv: a ptr to an arr
 * Return: 0
 */
int main(int argc, char *argv[])
{
int m = 0;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);

			printf("%d\n", m);
			return (0);
	}
	else
	{
	printf("Error\n");
	}
	return (1);
}
