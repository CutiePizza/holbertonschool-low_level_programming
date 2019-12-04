#include <stdio.h>

/**
* main - Print numbers uisng the putchar function.
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
return (0);
}
