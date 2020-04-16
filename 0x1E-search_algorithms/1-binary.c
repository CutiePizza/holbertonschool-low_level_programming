#include "search_algos.h"

/**
 * binary_search - binary search
 * @array: pointer to an array of integers
 * @size: size of array
 * @value: value to look for
 * Return: -1 if value nor found, Indew's value if found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, mid, left = 0, right = size - 1;


	if (array == NULL)
		return (-1);
	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	printf("Searching in array: %d\n", array[left]);
	return (-1);
}
