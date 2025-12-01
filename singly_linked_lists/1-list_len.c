#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements in a list
 * @h: pointer to an element of type list_t
 *
 *Return: the number of nodes
 */


size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
