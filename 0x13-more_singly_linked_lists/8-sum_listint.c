#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @h: First node in the linked list
 * Return: Resulting sum
 */

int sum_listint(listint_t h)
{
	int sum = 0;
	listint_t *temp = h;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
