#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Add node to the end
 * @h: Head of the node
 * @str: String
 * Return: New
 */

list_t *add_node_end(list_t **h, const char *str)
{
	list_t *new, *tmp;
	unsigned int i, c = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		c++;
	new->len = c;
	new->next = NULL;
	tmp = *h;

	if (tmp == NULL)
		*h = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*h);
}
