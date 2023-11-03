#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - Function that creates an array of integers.
 * @min: Lowest value in the array.
 * @max: Highest value in the array.
 * Return: A pointer to the address of the memory block.
 * Null if malloc fails.
 */

int *array_range(int min, int max)
{
	int *block;
	int k, l = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (k = min; k <= max; k++)
		{
			block[l] = k;
			l++;
		}
		return (block);
	}
	else
		return (NULL);

}
