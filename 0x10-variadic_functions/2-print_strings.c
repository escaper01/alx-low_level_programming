#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print str
 * @separator: sep
 * @n: num of args
 * Description: shuf lfuq
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pargs;
	unsigned int i;

	va_start(pargs, n);

	for (i = 0; i < n; i++)
	{
		const char *current_str = va_arg(pargs, const char*);

		if (current_str)
		{
			printf("%s", current_str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && i + 1 != n)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
