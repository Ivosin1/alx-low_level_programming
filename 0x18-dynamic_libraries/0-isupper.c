#include "main.h"

/**
 * _isupper - This checks for uppercase characters
 * @c: variable to be checked
 * Return: Always 0 (To ascertain successful run)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
