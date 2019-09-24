#include "holberton.h"
/**
*print_alphabet_x10 - Entry point
*
* Return: alphabet
*/
void print_alphabet_x10(void)
{
int i = 0;
char j;

while (i < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
i++;
}
}
