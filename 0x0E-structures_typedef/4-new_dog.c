#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * new_dog - Create a new dog
  * @name: String, dog's name
  * @age; dog's age
  * @owner: dog's owner
  * Return: Pointer to type dog_t
  */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy-> owner = owner;
return (doggy);
}


