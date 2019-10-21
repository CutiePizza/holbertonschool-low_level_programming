#include <stdio.h>
#include "dog.h"

/**
  * print_dog - prints a struct dog
  * @d: Variable of type struct d
  */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == 0)
		printf("Name: %s\n", "nil");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: %.1f\n", "nil");
	else
		printf("Age: %.1f\n", d->age);

	if (d->owner == 0)
		printf("Owner: %s\n", "nil");
	else
		printf("Owner: %s\n", d->owner);

}
