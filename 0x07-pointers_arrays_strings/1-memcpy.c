#include "holberton.h"

/**
  * _memcpy - copies n bytes from src to dest
  * @dest: character
  * @src: character
  * @n: int
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);

}
