#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;

	}
}
