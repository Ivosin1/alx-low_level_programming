#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: string with irst number
 * @n2: string with second number
 * @r: buffer to store result in
 * @size_r: size of buffer
 * Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a;
	int b;
	int k;
	int l;
	int m;
	int n;

	for (a = 0; n1[a]; a++)
		;
	for (b = 0; n2[b]; b++)
		;
	if (a > size_r || b > size_r)
		return (0);
	m = 0;
	for (a -= 1, b -= 1, k = 0; k < size_r - 1; a--, b--, k++)
	{
		n = m;
		if (a >= 0)
			n += n1[a] - '0';
		if (b >= 0)
			n += n2[b] - '0';
		if (a < 0 && b < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (a >= 0 || b >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
