#include "holberton.h"
/**
  * _strpbrk - Function
  * @s: String
  * @accept: String
  * Return: an integer
  */

char *_strpbrk(char *s, char *accept)
{

int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (&(s[i]));
			}
		}
		i++;
	}
	return (0);





}
