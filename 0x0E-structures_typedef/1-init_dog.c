#include "dog.h"

/**
  * init_dog - intialize a variable of type struct dog
  * @d: a variable of tye struct dog
  * @name: String, name of the dog
  * @age: Float, age of the dog
  * @owner: String, dog's owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
