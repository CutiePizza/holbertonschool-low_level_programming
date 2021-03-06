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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*_DOG_H */
