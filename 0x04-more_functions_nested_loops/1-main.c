#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for 1-isdigit.c
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
