#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string to be printed
 * Return: Always 0 (To ascertain a successful run)
 */

void print_rev(char *s)
{
	int longk = 0;
	int m;

	while (*s != '\0')
	{
		longk++;
		s++;
	}
	s--;
	for (m = longk; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
