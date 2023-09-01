#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: a segment to be checked.
 * @accept: prefix to be measured.
 * Return: The number of bytes in s which will be from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				bytes++;
				break;
			}

			else if (accept[k + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
