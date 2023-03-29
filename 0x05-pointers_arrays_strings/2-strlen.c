#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @str: string to get the length
 * return: length of string
 */

int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);

}
