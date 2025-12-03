#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: first node of dlistint_t
 * @index: index of the node
 *
 *Return: index of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}
	return (NULL);
}
