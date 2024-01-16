#include "main.h"
#include <stdio.h>

/**
* _strpbrk - function that searches a string for any set of bytes.
* @s: string to be searched.
* @accept: string containing bytes to be searched.
* Return: Returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int k;
	int l;

	for (k = 0; *s != '\0'; k++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (*s == accept[l])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
