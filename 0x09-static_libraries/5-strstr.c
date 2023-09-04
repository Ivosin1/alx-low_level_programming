#include "main.h"

/**
 * _strstr - function finds the first occurrence of a
 * given substring in a string.
 * @needle: The substring to be searched for.
 * @haystack: The string to be searched.
 * Return: pointer to the beginning of the located substring if found.
 * Null if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int first;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		first = 0;

		if (haystack[first] == needle[first])
		{
			do {
				if (needle[first + 1] == '\0')
					return (haystack);
				first++;
			} while (haystack[first] == needle[first]);
		}
		haystack++;
	}

	return ('\0');
}
