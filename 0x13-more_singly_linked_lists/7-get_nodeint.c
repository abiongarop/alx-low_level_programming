#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *get_nodeint_at_index -  function that returns the nth node of a listint_t linked list.
 * @head - pointer to a pointer to the head of the linked list
 * @index: index of the node starting at 0
 *
 * Return:  nth node of a listint_t linked list, if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return (head != NULL ? head : NULL);
}
