#include "main.h"

/**
 * _memset - fills memory with bytes
 * @s: memory area pointed to
 * @b: constant byte to be used
 * @n: number of times the copy should be done
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
