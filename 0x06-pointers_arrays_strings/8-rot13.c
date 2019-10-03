#include "holberton.h"
/**
 * rot13 - encodes a string with rot13 algorithm.
 * @ch: character
 * Return: Always 0.
 */

char *rot13(char *ch)
{

int i;

	for (i = 0; ch[i] != '\0'; i++)
	{

		if ((ch[i] >= 'a' && ch[i] <= 'm') || (ch[i] >= 'A' && ch[i] <= 'M'))
		{
		ch[i] = ch[i] + 13;
		}
		else if ((ch[i] >= 'n' && ch[i] <= 'z') || (ch[i] >= 'N' && ch[i] <= 'Z'))
		ch[i] = ch[i] - 13;
	}
return (ch);
}
