#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination value
 * @src: source value
 * @n: input value
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
