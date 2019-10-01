#include "holberton.h"
/**
* _strcpy - check the code for Holberton School students.
*@dest: char
*@src: char
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{

	int l, j;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}

	for (j = 0; j < l; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

return (dest);
}
