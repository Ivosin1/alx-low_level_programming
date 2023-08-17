#include <stdio.h>

/**
* main - prints out first 50
* fibonacci suit numbers
* Return: return 0
*/

int main(void)
{
	int num;
	unsigned long k1 = 0, k2 = 1, k3;

	for (num = 0; num < 50; num++)
	{
		k3 = k1 + k2;
		printf("%lu", k3);
		k1 = k2;
		k2 = k3;

		if (num == 49)
			printf("\n");
		else
			printf(", ");

	}

	return (0);
}
