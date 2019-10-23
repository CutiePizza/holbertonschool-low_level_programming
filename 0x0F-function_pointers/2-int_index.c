#include <stdio.h>
#include <stdlib.h>

/**
  * int_index - searches for an integer
  * @array: ointer to an array
  * @size: size of the array
  * @cmp: compare values
  * Return: Index of the element
  */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);




}
