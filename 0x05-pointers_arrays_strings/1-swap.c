#include "holberton.h"

/**
   * swap_int - swap two numbers
    * @a: pointer to integer
    * @b: pointer to integer
      */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
