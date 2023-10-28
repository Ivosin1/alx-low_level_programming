#include "main.h"

/**
 * _memcpy - copies a number of bytes
 * from source to destination area
 * @dest: destination to be copied to
 * @src: source from where the bytes are copied
 * @n: number of bytes to be copied
 * Return: a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}

	return (dest);
}
