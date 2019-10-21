#include <stdio.h>
#include "dog.h"

/**
  * print_dog - prints a struct dog
  * @d: Variable of type struct d
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
		{
	if (d->name != '\0')
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", "(nil)");

		printf("Age: %.1f\n", d->age);

	if (d->owner != '\0')
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %s\n", "(nil)");
		}
}
