#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, a, b, s;

	for (i = 1; i <= 100; i++)
	{
	if (i < 10)
	{
		if ((i == 3 || i == 6 || i == 9) && (i == 5 || i == 0))
			printf("FizzBuzz ");
		else if (i == 3 || i == 6 || i == 9)
			printf("Fizz ");
		else if (i == 5)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	else if (i < 100)
	{
	a = i / 10;
	b = i % 10;
	s = a + b;
		while (s > 10)
		{
		a = a / 10;
		b = b % 10;
		s = a + b;
		}
		if (((a + b == 3) || (a + b == 6) || (a + b == 9)) && (b == 0 || b == 5))
			printf("FizzBuzz ");
		else if ((a + b == 3) || (a + b == 6) || (a + b == 9))
			printf("Fizz ");
		else if (i % 10 == 0 || i % 10 == 5)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	else if (i == 100)
		printf("Buzz ");
	}
printf("\n");
return (0);
}
