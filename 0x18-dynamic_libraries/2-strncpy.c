#include "main.h"

/**
 * _strncpy - fucntion that copies a string
 * @dest: destination
 * @src: source
 * @n: input integer
 * Return: returns the updated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];

	for ( ; k < n; k++)
		dest[k] = '\0';

	return (dest);
}
