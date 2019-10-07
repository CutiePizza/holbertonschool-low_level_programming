#include "holberton.h"
/**
  * _strpbrk - Function
  * @s: String
  * @accept: String
  * Return: an integer
  */

char *_strpbrk(char *s, char *accept)
{

int i = 0, j, ok = 0;

	while (s[i] && ok == 0)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				ok = 1;
				break;
			}
		}
		i++;
	}
	return (&(s[i - 1]));





}
