#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: Always 0 (To ascertain successful run)
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int k;

	while (s[counter] != '\0')
	counter++;
	for (k = 0; k < counter; k++)
	{
		counter--;
		rev = s[k];
		s[k] = s[counter];
		s[counter] = rev;
	}
}
