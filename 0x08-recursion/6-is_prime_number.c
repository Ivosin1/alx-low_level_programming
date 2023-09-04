#include "main.h"

/**
* is_prime_number - returns true if the number is prime.
* @n: Number to be checked.
* Return: True if number is a prime.
*/

int is_prime_number(int n)
{
	int index = n / 2;

	if (n <= 1)
		return (0);
	return (def_prime(n, index));
}

/**
* def_prime - returns 1 if n is a prime
* @n: number to be checked
* @index: number to begin checking from
* Return: 1 if n is prime and 0 if not.
*/

int def_prime(int n, int index)
{
	if (index <= 1)
		return (1);
	else if (n % index == 0)
		return (0);
	return (def_prime(n, index - 1));
}
