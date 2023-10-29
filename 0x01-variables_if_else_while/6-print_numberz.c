#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain success)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
