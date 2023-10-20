#include "main.h"
#include <stddef.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: Where to begin setting of the bit.
 *
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n |= (1 << index);
	return (1);
}
