#include "main.h"

/**
* is_palindrome - Returns true if the given string is a palindrome
* @s: string to be checked
* Return: True if the given string is a palindrome
*/

int is_palindrome(char *s)
{
	int first = 0;
	int len = check_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, first));
}

/**
 * check_strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int check_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += check_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of the string.
 * @first: First character of the string to be checked.
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
 */

int check_palindrome(char *s, int len, int first)
{
	if (s[first] == s[len / 2])
		return (1);

	if (s[first] == s[len - first - 1])
		return (check_palindrome(s, len, first + 1));

	return (0);
}
