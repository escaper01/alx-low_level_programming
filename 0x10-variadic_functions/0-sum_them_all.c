#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sum all args
 * @n: num of args
 * Description: shuf lfuq
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list pargs;

	if (n == 0)
	{
		return (0);
	}

	va_start(pargs, n);

	for (i = 0; i < n; i++)
	{
		int current_num = va_arg(pargs, int);

		sum += current_num;
	}
	va_end(pargs);
	return (sum);
}
