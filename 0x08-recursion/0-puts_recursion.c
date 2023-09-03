#include "main.h"

/**
 * _puts_recursion - function that prints a string,
 * followed by a new line.
 * @s: string to be printed.
 * Return: Always 0 (To ascertain successful run)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
