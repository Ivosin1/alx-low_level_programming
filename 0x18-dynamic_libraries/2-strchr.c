#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to be checked.
 * @c: character to be searched for in the string.
 * Return: 0 if c not found.
 * pointer to the first occurence if 'c' is found.
 */

char *_strchr(char *s, char c)
{
	int first;

	for (first = 0; s[first] >= '\0'; first++)
	{
		if (s[first] == c)
			return (s + first);
	}

	return ('\0');
}
