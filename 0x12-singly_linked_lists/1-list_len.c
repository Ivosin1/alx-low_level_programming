#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the list.
 *
 * Return: The number of elements.
 */

size_t list_len(const list_t *h)
{
	int k;

	if (h == NULL)
		return (0);

	for (k = 1; h->next != NULL; k++)
		h = h->next;
	return (k);
}
