#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the attributes of a dog struct
 * @d: pointer to a dog struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	    printf("Name: %s\n", d->name ? d->name : "(nil)");
	    printf("Age: %.6f\n", d->age);
	    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
