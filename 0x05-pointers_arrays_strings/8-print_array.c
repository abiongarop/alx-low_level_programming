#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * @n: number of elements to be printed
 * @a: array of integers
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
	printf("%d", a[k]);

	if (k != (n - 1))
	{
	printf(", ");
	}
	}
	putchar('\n');
}

