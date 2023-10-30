#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: String to be copied
 *
 * Return: A pointer to the duplicated string if successful
 * Null in time of insufficient memory.
 */

char *_strdup(char *str)
{
	char *new;
	int first, len;

	if (str == NULL)
		return (NULL);

	for (first = 0; str[first]; first++)
		len++;
	new = malloc(sizeof(char) * (len + 1));

	if (new == NULL)
		return (NULL);

	for (first = 0; str[first]; first++)
	{
		new[first] = str[first];
	}

	new[len] = '\0';

	return (new);

}
