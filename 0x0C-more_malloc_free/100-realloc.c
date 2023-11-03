#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - Reallocates a memory block using malloc and free.
 * @ptr: Previous pointer to the memory to be reallocated by malloc.
 * @old_size: Size of the ptr befroe reallocation.
 * @new_size: Size after reallocation.
 * Return: A pointer to the address of the new memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_address, *new_ptr;
	unsigned int k = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_address = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (k = 0; k < old_size; k++)
		new_address[k] = new_ptr[k];
	free(ptr);
	return (new_address);
}
