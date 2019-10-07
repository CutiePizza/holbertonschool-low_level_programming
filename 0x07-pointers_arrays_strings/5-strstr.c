#include "holberton.h"
/**
  * _strstr - Locates first occurnce of a substring
  * @haystack: string
  * @needle: string
  * Return: pointer
  */

char *_strstr(char *haystack, char *needle)
{

	int i, j, size_n = 0, size_h = 0;

	while (haystack[size_h])
	size_h++;

	while (needle[size_n])
	size_n++;

	for (i = 0; i < size_h; i++)
	{
		if (haystack[i] == needle[0])
		{
		for (; j < size_n; j++)
		{
		if (haystack[i + j] != needle[j])
		break;
		}
		if (j == size_n)
		return (&(haystack[i]));
		}
	}
return (0);
}


