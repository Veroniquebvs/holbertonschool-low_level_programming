#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * sum_dlistint - returns the sum of all the data(n) of a list
 * @head: first node of dlistint_t
 *
 *Return: index of the node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = (sum + head->n);

		head = head->next;
	}

	return (sum);
}
