#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: pointer to lists.h list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next_node = NULL;
	size_t count = 0;

	while (current)
	{
		next_node = current->next;
		free(current);
		count++;
		if (next_node >= current)
		{
			break;
		}

		current = next_node;
	}
	*h = NULL;
	return (count);
}
