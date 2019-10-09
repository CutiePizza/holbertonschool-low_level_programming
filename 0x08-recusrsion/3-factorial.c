#include "holberton.h"

/**
  * factorial - Calculates the factorial of a given number
  * @n: Number, integer
  * Return: integer
  */

int factorial(int n)
{

if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));

}
