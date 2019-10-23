#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - executes a function given as a parameter
  * @array: array
  * @size: array's size
  * @action: function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
