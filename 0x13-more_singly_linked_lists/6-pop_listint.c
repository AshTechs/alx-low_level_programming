#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @p: Pointer to the first element in the linked list
 * Return: the data inside the elements, 0 if empty
 */

int pop_listint(listint_t **p)
{
	listint_t *temp;
	int num;

	if (!p || !*p)
		return (0);
	num = (*p)->n;
	temp = (*p)->next;
	free(*p);
	*p = temp;
	return (num);
}
