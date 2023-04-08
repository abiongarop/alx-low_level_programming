#include "main.h"
#include <stdio.h>

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if it is a palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * check_pal - checks if a string is a palindrome recursively
 * @s: string to be checked
 * @i: iterator
 * @len: length of a string
 * Return: 1 if a palindrome, 0 if otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - returns length of a string
 * @s: string to get the length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
