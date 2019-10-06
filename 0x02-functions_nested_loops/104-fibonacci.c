#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
unsigned int  n_1 = 2;
unsigned int  n_2 = 1;
unsigned int  i, s;
s = 0;
printf("%u, %u, ", n_2, n_1);

	for (i = 1; i < 97; i++)
	{
		s = n_1 + n_2;
		if (i != 96)
		printf("%u, ", s);
		else
		printf("%u", s);
		n_2 =  n_1;
		n_1 = s;
	}
	printf("\n");

return (0);
}
