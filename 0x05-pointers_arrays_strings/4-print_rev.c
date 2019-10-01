
#include "holberton.h"

/**
*print_rev - prints a string
*@s: character
*Return: void
*/
void print_rev(char *s)
{
	int i = 0;
	int j;

	i = _strlen(s);
	for (j = i; j >= 0; j--)
	{
	_putchar(s[j]);
	}
	_putchar('\n');
}
