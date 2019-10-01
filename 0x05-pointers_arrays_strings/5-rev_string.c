#include "holberton.h"
/**
* rev_string - prints a string
* @s: character
* Return: void
*/
void rev_string(char *s)
{
	int i, j, k;
	char n;

	i = 0;

while (*(s + i) != '\0')
{
	i++;
}
i--;
k = i / 2;
j = 0;

while (j != k)
{
n = *(s + j);
*(s + j) = *(s + i);
*(s + i) = n;
k--;
i--;
}
}
