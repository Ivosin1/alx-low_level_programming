#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x
 * raised to the power of y
 * @x: The number to be raised.
 * @y: The power to which a number is raised.
 * Return: End result of the number raised to power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
