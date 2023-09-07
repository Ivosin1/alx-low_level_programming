#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of the memory block to be allocated.
 *Return: A poiner to the address of the memory block.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (k = 0; k < (nmemb * size); k++)
			block[k] = 0;
		return (block);
	}
	else
		return (NULL);
}
