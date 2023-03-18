#include <stdio.h>

/**
 * main = program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * return: Always 0 (Success);
 *
 */
int main(void)
{
	char low;
	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
