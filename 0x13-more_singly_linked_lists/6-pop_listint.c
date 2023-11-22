#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list and
 * returns the head node's data n.
 * @head: A pointer to the listint_t structure.
 *
 * Return: The head node's data from the deleted elements.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
