#include <stdio.h>
#include <stdlib.h>

/**
  * strtow - Function that splints a string into words
  * @str: String to split
  * Return: Pointer to an array of strings
  */

char **strtow(char *str)
{
	int i, k, j = 0, words = 1, len = 0;
	char **p;

	if (str == NULL || str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32 && str[i + 1] != 32)
			words++;	
	}
	p = malloc(words * sizeof(char *));
	for (i = 0; i < words; i++)
	{	
		len = 0;
		for (; str[j] != '\0'; j++)
		{
			if (str[j] != 32)
				len++;
			else
				break;			
		}
		p[i] = malloc(1 + len * sizeof(char));
		for (k = 0; k < len; k++)
			p[i][k] = str[j - len + k];
		p[i][len] = '\0';
	}
return (p);
	
}
