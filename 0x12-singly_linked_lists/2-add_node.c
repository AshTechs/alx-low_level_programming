#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - Add a new node to a list
 * @h: Original linked list
 * @str: String to add to the node
 * Return: New list, NULL if not
 */

list_t *add_node(list_t **h, const char *str)
{
	list_t *new;
	int leng = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[leng])
		leng++;

	new->len = leng;
	new->str = strdup(str);
	new->next = *h;
	*h = new;

	return (new);
}
