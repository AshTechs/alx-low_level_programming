#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @h: Linked list to search for
 * Return: Address of the node, or NULL
 */

listint_t *find_listint_loop(listint_t *h)
{
	listint_t *slow = h;
	listint_t *fast = h;

	if (!h)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
