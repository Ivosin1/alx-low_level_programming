#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to be used
 * @index: starting point from 0 for the bit you want to set.
 *
 * Return: 1 to ascertain success & -1 if error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
