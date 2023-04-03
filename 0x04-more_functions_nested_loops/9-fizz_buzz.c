#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the FizzBuzz program
 * prints Fizz for multiples of three
 * prints Buzz for multiples of five
 * Return: 0 Always
 *
 */

int main(void)
{
	int n;
	
	for(n = 1; n <=100; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (n % 3 == 0 && n % 5 != 0)
	{
	printf("Fizz");
	}
	else if (n % 5 == 0 && n % 3 != 0)
	{
	printf("Buzz");
	}
	else if (n == 1)
	{
	printf("%d", n);
	}
	else
	{
	printf(" %d", n);
	}
	}
	putchar('\n');

	return (0);
}
