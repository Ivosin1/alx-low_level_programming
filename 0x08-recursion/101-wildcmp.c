#include "main.h"

/**
* wildcmp - Compares two strings.
* @s1: The first string to be checked.
* @s2: Second string to be checked.
* Return: 1 if identical and 0 if not.
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
