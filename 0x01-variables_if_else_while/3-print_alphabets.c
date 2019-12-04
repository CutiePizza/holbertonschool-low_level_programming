#include <stdio.h>

/**
 * main - Prints alphabet in lowercase and uppercase using putchar().
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

for (i = 'a'; i <= 'z'; i++)
	putchar(i);
for (i = 'A'; i <= 'Z'; i++)
	putchar(i);
	putchar('\n');
return (0);
}
