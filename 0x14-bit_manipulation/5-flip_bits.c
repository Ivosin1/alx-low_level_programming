#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: index number.
 * @m: second number.
 *
 * Return: Number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, bit_count = 0;
	unsigned long int latest;
	unsigned long int sole = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		latest = sole >> k;
		if (latest & 1)
			bit_count++;
	}

	return (bit_count);
}
