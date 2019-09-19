#include <stdio.h>
/**
* main - Entry point
* Inès Chokri
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 'a'; i < 'z'; i++)
if (i != 'e' && i != 'q')
putchar(i);
putchar('\n');
return (0);
}
