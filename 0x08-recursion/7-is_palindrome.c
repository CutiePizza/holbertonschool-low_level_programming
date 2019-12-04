#include "holberton.h"

/**
 * strlen_recursion - return length of a string
 * @s: string
 * Return: integer
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + strlen_recursion(s + 1));
}

/**
 * is_pal - returns if string palindrome or not
 * @start: pointer pointing on start of a string
 * @end: pointer pointing on end of a string
 * @len: length of string, integer
 * Return: 1 if true, 0 if false
 */

int is_pal(char *start, char *end, int len)
{
	if (len < 0)
		return (1);
	else if (*start == *end)
		return (is_pal(start + 1, end - 1, len - 1));
	else
		return (0);

}

/**
 * is_palindrome - Return if palindrome
 * @s: string
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	int len = strlen_recursion(s);
	char *start = s;
	char *end = (s + len - 1);

	len--;
	return (is_pal(start, end, len / 2));
}
