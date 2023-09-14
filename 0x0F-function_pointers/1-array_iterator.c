#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Goes through every element of an array.
 * @array: Array in check.
 * @size: Size of the array.
 * @action: Pointer to the function used.
 * Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;


	if (array == NULL || action == NULL)
		return;


	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
