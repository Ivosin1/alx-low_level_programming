#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int k, n, longm;

	longm = 0;

	for (k = 0; str[k] != '\0'; k++)
		longm++;

	n = (longm / 2);

	if ((longm % 2) == 1)
		n = ((longm + 1) / 2);

	for (k = n; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}

