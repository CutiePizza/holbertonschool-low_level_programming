#include <stdio.h>
/**
* main - Entry point
* Inès Chokri
* Return: Always 0 (Success)
*/
int main(void)
{

int i, j;
int m, n;

for (m = 0; m < 10; m++)
{
for (n = 0; n < 9; n++)
{
for (i = 0; i < 10; i++)
	for(j = 1; j < 10; j++)
{
	{
putchar(m + '0');
putchar(n + '0');
putchar(' ');
putchar(i + '0');
putchar(j + '0');
if ( i != 9 || j != 9 || m != 9 || n != 8) 
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
