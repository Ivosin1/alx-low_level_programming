#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: an input integer
 * Return: resulting of the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	k = 0;
	l = 0;

	while (dest[k] != '\0')
		k++;

	while (src[l] != '\0' && l < n)
	{
		dest[k] = src[l];
		k++;
		l++;
	}

	dest[k] = '\0';

	return (dest);

}
