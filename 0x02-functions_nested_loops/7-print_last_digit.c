#include "main.h"

/**
  * print_last_digit - shuf desc
  * Description: return last number
  * @n: number to check
  * Return: return  val
  */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}
