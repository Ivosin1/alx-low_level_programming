#include "function_pointers.h"

/**
 * int_index - Checks for an integer and returns a value.
 * @array: Array to be checked.
 * @size: Size of the array.
 * @cmp: Pointer to func that compares search ints.
 * Return: -1 if no match is found and if size is <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;


	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);


	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}
