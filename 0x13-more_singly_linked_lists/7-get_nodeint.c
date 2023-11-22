#include "lists.h"

/**
 * get_nodeint_at_index - Fuction that gets the node of list at a certain index
 * @head: A pointer to the listint_t structure.
 * @index: The index of the node.
 *
 * Return: A pointer to the specified node, or NULL if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
