#include "main.h"
int calc_sqrt(int num1, int num2);
/**
 * _sqrt_recursion - calc natural sqrt of a  num
 *@n: first value
 * Return: Return solution
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (calc_sqrt(n, 1));
}


/**
 * calc_sqrt - calculate sqrt
 *@num1: num 1
 *@num2: num 2
 * Return: int - result
 */
int calc_sqrt(int num1, int num2)
{
	if (num2 * num2 == num1)
		return (num2);
	else if (num2 * num2 > num1)
		return (-1);
	else
		return (calc_sqrt(num1, num2 + 1));
}

