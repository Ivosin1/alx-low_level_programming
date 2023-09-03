#include "main.h"

/**
 * _print_rev_recursion - Prints a reversed string.
 * @s: String to be reversed
 *
 * Return: Always 0 (To ascertain successful run)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}
}
