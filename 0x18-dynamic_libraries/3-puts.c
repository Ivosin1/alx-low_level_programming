#include "main.h"

/**
 *_puts - function that prints a string
 * @str: string to print
 *
 * Return: characters printed to ascertain success
 */

void _puts(char *str)
{
	while (*str != '\0')

		_putchar(*str++);

	_putchar('\n');
}
