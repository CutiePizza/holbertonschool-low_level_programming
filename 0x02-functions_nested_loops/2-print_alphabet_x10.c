#include "holberton.h"
/**
*code for Holberton School students.
*
* Return: Always 0.
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
