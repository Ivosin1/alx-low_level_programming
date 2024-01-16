#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: append
 * @src: string to be added
 * Return: adjusted string
 */

char *_strcat(char *dest, char *src)
{
	int k, l;

	k = 0;
	l = 0;

	while (dest[k] != '\0')
		k++;

	while (src[l] != '\0')
	{
		dest[k] = src[l];
		l++;
		k++;
	}

	dest[k] = '\0';

	return (dest);
}
