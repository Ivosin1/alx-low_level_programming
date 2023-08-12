#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain success)
 */

int main(void)
{
	for (char k = 'a'; k <= 'z'; k++)
	{
		if (k != 'q' && k != 'e')
		putchar(k);
	}
	putchar('\n');
		return (0);
}
