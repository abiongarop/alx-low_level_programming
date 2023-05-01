#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked listint_t list.
 * @h: pointer to the listint_t list
 *
 * Return: number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
