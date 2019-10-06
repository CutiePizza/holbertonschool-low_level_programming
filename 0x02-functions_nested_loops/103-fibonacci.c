#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
long  n_1 = 2;
long  n_2 = 1;
long  i, s;

s = 2;

	for (i = 1; i < 31; i++)
	{
		if ((n_1 + n_2) % 2 == 0)
		s = n_1 + n_2;

		n_2 =  n_1;
		n_1 = n_1 + n_2;
	}
	printf("%ld\n", s);
return (0);
}
