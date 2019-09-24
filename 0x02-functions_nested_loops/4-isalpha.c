#include "holberton.h"
/**
* _isalpha - check alpha
*@c: character
* Return: 1 or 0
*/
int _isalpha(int c)
{
int n = 0;

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

n = 1;

return (n);
}
