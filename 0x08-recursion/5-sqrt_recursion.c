#include "holberton.h"

/**
  * _sqrt_recursion - Call the function that calculates the sqrt
  * @n: integer
  * Return: integer
  */

int _sqrt_recursion(int n)
{
	return (real_sqrt_recursion(0, n));
}

/**
  * real_sqrt_recursion - Calculates the sqrt of a number
  * @i: integer
  * @n: integer
  * Return: integer
  */

int real_sqrt_recursion(int i, int n)
{

	if (i * i == n)
		return (i);
	else if (i < n)
		{
		return (real_sqrt_recursion(i + 1, n));
		}
	else
		return (-1);

}
