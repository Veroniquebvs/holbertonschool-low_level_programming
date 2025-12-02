#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
* create_node - create a new node
*
* @str: string
* @len: lenght of the string
*
*Return: new node
*/

list_t *create_node(const char *str, unsigned int len)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}

	new_node->str = strdup(str);
	new_node->len = len;

	if (new_node->str == NULL)
	{
		free(new_node);
		exit(EXIT_FAILURE);
	}

	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - adds a new node at the end of a list
 * @head: first element of list_t
 * @str: element of struture head
 *
 *Return: new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;
	list_t *temp = *head;

	while (str[len] != '\0')
	{
		len++;
	}

	new_node = create_node(str, len);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

	temp->next = new_node;

	return (new_node);

	}
}
