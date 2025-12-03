#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
* create_node - create a new node
*
* @n: integer
*
*Return: new node
*/

dlistint_t *create_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}

	new_node->n = n;

	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: first element of list_t
 * @n: element of struture head
 *
 *Return: new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = create_node(n);

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
