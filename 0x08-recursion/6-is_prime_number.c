#include "main.h"
int calc_prime(int num1, int num2);
/**
 * is_prime_number - function that  returns 1 if the input integer is a prime
 *@n: first value
 * Return: int - result
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (calc_prime(n, a));
}

/**
 * calc_prime - function that returns 1 if the input integer is a prime
 *@num1: first value
 *@num2: second value
 * Return: int - result
 */
int calc_prime(int num1, int num2)
{
	if (num1 / 2 < num2)
		return (1);
	if (num1 % num2 == 0)
		return (0);
	return (calc_prime(num1, num2 + 1));
}

