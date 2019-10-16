#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Copies a string
  * @str: String to copy
  * Return: Pointer to String
  */

char *_strdup(char *str)
{
	int len = 0, i;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[len])
	len++;
len++;

copy = malloc(len *sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[len] = '\0';

return (copy);
}
