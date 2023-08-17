#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @k: The number to be examined
 * Return: The last digit of the number
 */

int print_last_digit(int k)
{
	int last_num;

	last_num = k % 10;
	if (last_num < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
