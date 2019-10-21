#ifndef _DOG_H
#define _DOG_H

/**
  * struct dog - Define a structure that contains a dog information
  * @name: Name of the dog, String
  * @age: Age of the dog, float
  * @owner: Dog's owner, String
  *
  * Description: No need for a longer description.
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*_DOG_H */
