#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print nums
 * @separator: sep
 * @n: num of args
 * Description: shuf lfuq
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pargs;
	unsigned int i;

	va_start(pargs, n);

	for (i = 0; i < n; i++)
	{
		int current_num = va_arg(pargs, int);

		printf("%d", current_num);
		if (separator && i + 1 != n)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
