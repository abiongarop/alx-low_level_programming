#include <stdio.h>

/**
 * main - A program that prints the size of computer systems
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int a;
	float f;

printf("The size of a char is: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("The size of an int is: %lu bytes(s)\n", (unsigned long)sizeof(i));
printf("The size of a long int is: %lu bytes(s)\n", (unsigned long)sizeof(l));
printf("The size of a long long int is: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("The size of a float is: %lu byes(s)\n", (unsigned long)sizeof(f));
return (0);
}
