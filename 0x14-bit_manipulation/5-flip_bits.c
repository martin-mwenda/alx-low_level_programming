#include "mart.h"

/**
 * flip_bits - find number of bits you would need to flip
 * to get the 2nd number from the first number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num_flips = 0;

	while (n)
	{
		if ((n & 1) != (m & 1))
			num_flips++;
		n = n >> 1;
		m = m >> 1;
	}
	return (num_flips);
}

