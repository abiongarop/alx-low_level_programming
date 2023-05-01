#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list, if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
