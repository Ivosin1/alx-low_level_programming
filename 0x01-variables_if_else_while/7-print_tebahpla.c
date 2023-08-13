#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	char zyx;

	for (zyx = 'z'; zyx >= 'a'; zyx--)
		putchar(zyx);
	putchar(10);
	return (0);
}
