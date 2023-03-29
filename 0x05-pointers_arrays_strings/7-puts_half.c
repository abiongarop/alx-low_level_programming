#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed in half
 * Return: void
 */

void puts_half(char *str)
{
	int j;
	int l;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
	l = (j - 1) / 2;
	l += 1;
	}
	else
	{
	l = j / 2;
	}

	for (; l < j; l++)
	{
	putchar(str[l]);
	}
	putchar('\n');
}


