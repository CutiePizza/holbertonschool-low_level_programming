#include <stdio.h>
#include <stdlib.h>

void allouer(char *res, int len, char *s);

/**
  * str_concat - Concatenates two strings
  * @s1: Fisrt string
  * @s2: Second string
  * Return: A pointer to Final String
  */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = 0, len2 = 0, final;
	char *res;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
final = len1 + len2;
	if (s1 != 0 && s2 != 0)
	{
		final++;
		res = malloc(final *sizeof(char));
		if (res == NULL)
			return (NULL);
		for (i = 0; i < len1; i++)
			res[i] = s1[i];
		for (j = 0; j < len2; j++)
		{
			res[i] = s2[j];
			i++;
		}
		res[final] = '\0';
	}
	else if (s2 == 0 && s1 != 0)
	{
		res = malloc(len1 * sizeof(char));
		if (res == NULL)
			return (NULL);
		allouer(res, len1, s1);
	}
	else if (s2 != 0 && s1 == 0)
	{
		res = malloc(len2 * sizeof(char));
		if (res == NULL)
			return (NULL);
		allouer(res, len2, s2);


	}
	else if (s2 == 0 && s1 == 0)
	{
	res = malloc(sizeof(char));

	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	}
return (res);
}

/**
  * allouer - copy a string in another
  * @res: string buffer
  * @len: length of string
  * @s: String to copy
  */

void allouer(char *res, int len, char *s)
{
	int i;

	len++;
		if (res == NULL)
			res = NULL;

		for (i = 0; i < len; i++)
			res[i] = s[i];
		res[len] = '\0';
}
