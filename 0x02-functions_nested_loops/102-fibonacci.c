#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
long int n_1 = 2;
long int n_2 = 1;
long int i, s;
s = 0;
printf("%ld, %ld, ", n_2, n_1);

	for (i = 1; i < 49; i++)
	{
		s = n_1 + n_2;
		printf("%ld, ", s);
		n_2 =  n_1;
		n_1 = s;
		
	}
	printf("\n");

return (0);
}
