#include <stdio.h>

/**
 * main -  prints numbers from 1 to 100
 * and also 'Fizz', 'Buzz' or 'FizzBuzz'
 *
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	int k;

	while (k++ < 100)

		if ((k % 3 == 0) && (k % 5 == 0))
			printf("FizzBuzz ");

		else if ((k % 3) == 0)
			printf("Fizz ");

		else if ((k % 5) == 0)
		{
			if (k != 100)
				printf("Buzz ");

			else
				printf("Buzz ");
		}

		else
			printf("%d ", k);

	printf("\n");
	return (0);
}
