#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: first element of list_t
 * @n: element of struture head
 *
 *Return: new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		new_node->n = n;
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
	}

	return (new_node);
}
