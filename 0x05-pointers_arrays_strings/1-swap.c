#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int to be swapped
 * @b: int to be swapped
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
