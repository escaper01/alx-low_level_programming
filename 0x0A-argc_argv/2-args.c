#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: size of argv .
 * @argv: a ptr to the arr
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (*argv)
	{
		(void) argc;
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
