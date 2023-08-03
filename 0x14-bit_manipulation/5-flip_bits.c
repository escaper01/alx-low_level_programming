#include "main.h"

/**
 * flip_bits - returns the num of bits you would
 * need to flip to get from one num to another
 * @n: num one
 * @m: num two
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_of_bits;

	for (num_of_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_of_bits++;
	}

	return (num_of_bits);
}
