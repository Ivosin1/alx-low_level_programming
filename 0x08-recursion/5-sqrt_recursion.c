#include "main.h"

/**
 * sqrt_a - Function that returns the natural square
 * root of a number
 * @k: number to be used.
 * @m: squared number.
 * Return: square root or -1
 */

int sqrt_a(int k, int m)
{
	if (m * m == k)
	{
		return (m);
	}
	else if (m * m > k)
	{
		return (-1);
	}
	return (sqrt_a(k, m + 1));
}

/**
 * _sqrt_recursion - Function returns the natural square root
 * of a number
 * @n: The Number to be tested.
 * Return: Natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
