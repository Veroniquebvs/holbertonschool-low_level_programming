#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - print all element of a list
 * @h: pointer to an element of type list_t
 *
 *Return: the number of nodes
 */


size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d ", h->n);
		printf("\n");
		h = h->next;
		i++;
	}
	return (i);
}
