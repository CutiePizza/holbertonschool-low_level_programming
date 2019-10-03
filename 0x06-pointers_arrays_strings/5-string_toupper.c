#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @ch: character
 * Return: character
 */

char *string_toupper(char *ch)
{
	int i, l = 0;

	while (ch[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = ch[i] - 32;

	}
	return (ch);
}
