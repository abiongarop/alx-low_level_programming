#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head);
{
	const listint_t *current = head, *next_node = NULL;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		next_node = current->next;
		if (next_node >= current)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}
		current = next_node;
	}
	if (!current)
	{
		return (count);
	}
	exit(98);
}
