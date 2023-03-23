#include "main.h"

/*
 * 3-islower - checks for lowercase character.
 * @c is the lowercase letter
 * Return: 1 if lowercase or 0 if anything else
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
return (0);
}
