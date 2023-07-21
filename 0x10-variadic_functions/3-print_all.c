#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all
 * @format: list of types of arguments passed to the function
 * Description: shuf lfuq
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list pargs;
	int i;
	char *sep = ", ";

	int str_len = 0;
	char *current_elem;

	va_start(pargs, format);

	while (format && format[str_len])
		str_len++;
	for (i = 0; i < str_len; i++)
	{
		if (i + 1 == str_len)
			sep = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(pargs, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(pargs, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(pargs, double), sep);
				break;
			case 's':
				current_elem = va_arg(pargs, char*);
				if (current_elem)
					printf("%s%s", current_elem, sep);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
	}

	printf("\n");
}
