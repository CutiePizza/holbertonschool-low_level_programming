#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{

int i, s;

s = 0;
for (i = 1; i < 1024; i++)
{
	if (i % 3 == 0 || i % 5 == 0)
	{
		s += i;
	}
}
printf("%d\n", s);
}
