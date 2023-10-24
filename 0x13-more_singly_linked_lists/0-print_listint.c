#include "lists.h"

/**
* print_listint - Prints all the elements of a linked list
* @l: Linked list
* Return: Number of nodes
*/

size_t print_listint(const listint_t *l)
{
	size_t num = 0;

	while (l)
	{
		printf("%d\n", l->n);
		num++;
		l = l->next;
	}
	return (num);
}
