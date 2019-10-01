#include "holberton.h"
/**
* rev_string - prints a string
* @s: character
* Return: void
*/
void rev_string(char *s)
{
	int i;
	int j;
	char n;

	i = 0;

while (*(s + i) != '\0')
{
	i++;
}
i--;
for (j = 0; j != i; j++)
{	
	n = *(s + j);
	*(s + j) = *(s + i);
	*(s + i) = n;
	i--;
}
}
