#include "main.h"
#include <stdio.h>

int actual_prime_number(int n, int i);

/**
 * is_prime_number - shows if a number is a prime number or not
 * @n: input integer
 *
 * Return: 1 if n is a prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - shows if a number is a prime number recursively
 * @n: input value
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if otherwise
 */

int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % 1 == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, n - 1));
}
