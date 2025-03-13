#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: If d is not NULL, prints the name, age, and owner
 * of the dog. If an element is NULL, prints (nil) instead.
 * If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
