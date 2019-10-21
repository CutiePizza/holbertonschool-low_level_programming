#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - free dog
  * @d: dog
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
