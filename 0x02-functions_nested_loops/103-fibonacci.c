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
s = 0;
printf("%ld, %ld, ", n_2, n_1);

	do
	{
		s = n_1 + n_2;
		if (s % 2 == 0)
		{
		printf("%ld, ", s);
		}
		n_2 =  n_1;
		n_1 = s;
	} while (s < 4000000);
	printf("\n");
return (0);
}
