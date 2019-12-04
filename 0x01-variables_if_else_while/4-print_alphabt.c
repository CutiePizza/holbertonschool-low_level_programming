#include <stdio.h>

/**
* main - Prints the alphabet in lwercase except the two letters 'e' and 'q'.
* Return: Always 0 (Success)
*/

int main(void)
{
int i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
		putchar('\n');
return (0);
}
