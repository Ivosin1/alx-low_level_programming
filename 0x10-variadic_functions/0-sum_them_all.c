#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that sums all its paramters.
 * @n: The number of paramters.
 * @...: Other paramters to calculate their sum.
 * Return: Return 0 If n == 0.
 * Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list cc;
	unsigned int k, sum = 0;

	va_start(cc, n);

	for (k = 0; k < n; k++)
		sum += va_arg(cc, int);

	va_end(cc);

	return (sum);
}
