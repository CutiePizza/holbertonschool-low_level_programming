#include "holberton.h"
#include <stdio.h>
/**
  * print_diagsums - print sum of diagonals of an array of array
  * @a: array of int
  * @size: size of array
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
		s2 += *(a + (i * size) + (size - 1 - i));

	}
	printf("%d, %d\n", s1, s2);

}
