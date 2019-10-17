#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - concatinate two strings
  * @s1: String
  * @s2: String
  * @n: unisgned integer
  * Return: Null if fails, pointer to a string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, len1 = 0, len2 = 0, final;
	char *res;

	if (s1 != NULL)
	{
	while (s1[len1])
		len1++;
	}
	if (s2 != NULL)
	{
	while (s2[len2])
		len2++;
	}
	if (n < len2)
		len2 = n;

	final = len1 + len2;

		final++;
		res = malloc(final * sizeof(char));
		if (res == NULL)
			return (NULL);
		for (i = 0; i < len1; i++)
			res[i] = s1[i];
		for (i = 0; i < len2; i++)
		{
			res[i + len1] = s2[i];
		}
		res[final - 1] = '\0';

return (res);
}
