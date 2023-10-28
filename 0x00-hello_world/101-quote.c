#include <unistd.h>

/**
 * main - Programme that writes a quote without using printf and putf
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
