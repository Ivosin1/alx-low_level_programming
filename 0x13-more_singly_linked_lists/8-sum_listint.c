#include "lists.h"

/**
 * sum_listint - sums up all the data in the listint_t list
 * @head: head of the list
 *
 * Return: sum of the number
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	size_t sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
