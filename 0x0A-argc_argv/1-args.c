#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: num of args
 * @argv: arr with the args
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

