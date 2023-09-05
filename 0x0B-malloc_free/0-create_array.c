#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to be initialized in the array.
 * Return: A pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int k = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (k < size)
	{
		s[k] = c;
		k++;
	}
	return (s);
}
