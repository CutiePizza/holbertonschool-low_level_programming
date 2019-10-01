#include "holberton.h"

/**
   * swap_int - swap numbers
    *@a: pointer to integer
    *@b: pointer to integer
     * Return: void
      */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
