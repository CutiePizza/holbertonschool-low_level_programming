#include "holberton.h"

/**
 * leet - ncodes a string into 1337.
 * @ch: character
 * Return: Always 0.
 */

char *leet(char *ch)
{

	int i, j;
	char T[] = "aAeEoOtTlL";
	char T2[] = "4433007711";

	for (i = 0; ch[i] != '\0'; i++)
	{
		for (j = 0; T[j] != '\0'; j++)
		{
			if (ch[i] == T[j])
				ch[i] = T2[j];
		}

	}
	return (ch);

}
