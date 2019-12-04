#include <stdio.h>

/**
* main - prints number from 0 to 9 and the alphabet from a to f.
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
return (0);
}
