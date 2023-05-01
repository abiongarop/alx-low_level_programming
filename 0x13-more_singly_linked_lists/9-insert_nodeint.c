#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: A pointer to a pointer to the head node of the listint_t list
 * @idx: The index of the list where the new node should be added
 * @n: The integer data for the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *current_node = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = current_node;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx && current_node != NULL; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}
	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node;
	prev_node->next = new_node;
	return (new_node);
}
