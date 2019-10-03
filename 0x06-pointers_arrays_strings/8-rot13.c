#include "holberton.h"
/**
 * rot13 - encodes a string with rot13 algorithm.
 * @ch: character
 * Return: Always 0.
 */

char *rot13(char *ch)
{

int i, j;
char T[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char I[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (T[j] == ch[i])
				ch[i] = I[j];
		}
	}
return (ch);
}
