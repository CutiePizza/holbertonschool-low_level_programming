#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - Allocates memory for an array
  * @nmemb: size of array
  * @size: size of each size
  * Return: pointer to array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	return (p);
}
