#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints strings, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of parameters.
 * @...: Other parameters.
 * Return: If separator is NULL, it is not printed.
 * If one of the strings if NULL, print (nil) instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list cc_str;
	char *str;
	unsigned int k;

	va_start(cc_str, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(cc_str, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(cc_str);
}
