#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * new_dog - Create a new dog
  * @name: String, dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: Pointer to type dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *doggy = malloc(sizeof(dog_t));
char *dname = name;
char *downer = owner;

	if (doggy == NULL)
		return (NULL);
	if (dname == '\0' || downer == '\0')
		return (NULL);
	doggy->name = dname;
	doggy->age = age;
	doggy->owner = downer;
return (doggy);
}


