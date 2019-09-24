#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char i[] = "Holberton";
int j = 0;

while (j < 9)
{
_putchar(i[j]);
j++;
}
_putchar('\n');
return (0);
}
