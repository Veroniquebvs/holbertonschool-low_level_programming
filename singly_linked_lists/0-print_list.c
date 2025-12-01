#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print all element of a list
 * @h: pointer to an element of type list_t
 *
 *Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}

		h = h->next;
		i++;
	}
	return (i);
}
