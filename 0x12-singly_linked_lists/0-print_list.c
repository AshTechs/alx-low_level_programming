#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - Print all the elements of a list
 * @s: Singly linked list
 * Return: Number of nodes
 */

size_t print_list(const list_t *s)
{
	size_t nodes = 0;

	while (s != NULL)
	{
		if (s->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", s->len, s->str);
		s = s->next;
		nodes++;
	}
	return (nodes);
}
