#include <stdio.h>
/**
 * main - prints sum of even fibonacci
 * suit elements
 * fibonacci suit numbers
 * Return: return 0
 */

int main(void)
{
	unsigned long k1 = 0, k2 = 1, k3 = 0, sum = 0;

	while (k3 <= 4000000)
	{
		k3 = k1 + k2;
		k1 = k2;
		k2 = k3;

		if ((k1 % 2) == 0)
			sum += k1;

	}
	printf("%ld\n", sum);
	return (0);
}
