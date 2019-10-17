#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - checks if malloc worked
  * @b: unsigned integer
  * Return: void
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

