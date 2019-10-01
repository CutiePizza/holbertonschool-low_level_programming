#include "holberton.h"
/**
* _atoi - check the code for Holberton School students.
*@s: character
* Return: Always 0.
*/
int _atoi(char *s)
{
	int i, c, sign;

	sign = 1;
	i = 0;
	c = 0;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			sign *= -1;
		i++;
	}
	while ((*(s + i) >= '0') && (*(s + i) <= '9'))
	{
		c = c * 10 + (*(s + i) - '0');
		i++;
	}
return (c * sign);
}
