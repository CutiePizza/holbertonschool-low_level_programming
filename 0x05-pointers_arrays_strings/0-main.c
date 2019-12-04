#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for 0-reset_to_98.c
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
