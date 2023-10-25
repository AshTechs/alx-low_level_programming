#include "lists.h"

/**
 * get_nodeint_at_index - The node at a certain index in a linked list
 * @n: First node in the linked list
 * @index: Index of the node to return
 * Return: Pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *n, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = n;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
