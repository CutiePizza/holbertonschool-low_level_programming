#include "holberton.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int _isalpha(int c)
{
int n = 0;

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

n = 1;

return (n);
}
