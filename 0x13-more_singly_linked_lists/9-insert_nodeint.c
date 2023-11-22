#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a node
 * at a given index
 * @head: A pointer to listint_t structure
 * @idx: index of the list where the new node is inserted
 * @n: Integer data of the new node.
 *
 * Return: Always, the address to the new node index
 * NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}

	return (NULL);
}
