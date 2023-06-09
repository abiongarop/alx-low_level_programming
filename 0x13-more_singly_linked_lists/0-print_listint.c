#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the listint_t list
 *
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		 printf("%d\n", current->n);
		 count++;
		 current = current->next;
	}
	return (count);
}
