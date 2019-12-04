#include "holberton.h"

/**
 * _strlen_recursion - Calculates the length of a given String
 * @s: String
 * Return: An integer
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));


}
