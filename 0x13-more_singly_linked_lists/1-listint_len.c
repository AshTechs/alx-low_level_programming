#include "lists.h"

/**
* listint_len - Number of elements in a linked lists
* @l: Linked list
* Return: Number of nodes
*/

size_t listint_len(const listint_t *l)
{
	size_t num = 0;

	while (l)
	{
		num++;
		l = l->next;
	}
	return (num);
}
