#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: Always return length
 */

int _strlen(char *s)
{
	int longk = 0;

	while (*s != '\0')
	{
		longk++;
		s++;
	}

	return (longk);
}
