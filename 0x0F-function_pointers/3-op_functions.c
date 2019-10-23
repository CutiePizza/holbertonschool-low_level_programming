#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * op_add - addition two numbers
  * @a: integer
  * @b: integer
  * Return: integer
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Substract two numbers
  * @a: integer
  * @b: integer
  * Return: integer
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplicate two numbers
  * @a: integer
  * @b: integer
  * Return: integer
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Division of a by b
  * @a: integer
  * @b: integer
  * Return: integer
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - Mod
  * @a: integer
  * @b: integer
  * Return: integer
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
