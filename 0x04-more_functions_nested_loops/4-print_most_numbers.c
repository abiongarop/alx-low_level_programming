#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
	if (n == 2 || n == 4)
	{
		continue;
	}
	else
	{
	putchar(n + '0');
	}
	}
	putchar('\n');
}

