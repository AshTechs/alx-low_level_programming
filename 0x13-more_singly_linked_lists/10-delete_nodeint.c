#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at an index
 * @head: Pointer to the first element in the list
 * @idx: Index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_idx(listint_t **head, unsigned int idx)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (idx == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < idx - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
