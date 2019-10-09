#include "holberton.h"

/**
  * is_prime_number - call a fucntion that tells if a number is primary
  * @n: Integer
  * Return: Integer
  */
int is_prime_number(int n)
{
	return (prime(2, n));
}

/**
  * prime - Return if a number is primary or not
  * @i: integer to increment
  * @n: Number to test
  * Return: 0 or 1
  */

int prime(int i, int n)
{
	if (n <= 1)
		return (0);
	else if (i >= n)
		return (1);

	if (n % i != 0 && i != n)
		return (prime(i + 1, n));
	else
		return (0);
}

