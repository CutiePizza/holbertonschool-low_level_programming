#include "stdlib.h"
#include "stdio.h"
/**
  * create_array - Creation of an array dynamically
  * @size: Size of the array
  * @c: Value of array
  * Return: A pointer to the array
  */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

		ar = malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
			ar[i] = c;
		return (ar);




}
