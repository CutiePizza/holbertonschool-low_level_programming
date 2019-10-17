#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - Creates an array of integers
  * @min: integer
  * @max: integer
  * Return: Pointer to an array
  */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min) + 1);
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i] = i;
return (p);

}
