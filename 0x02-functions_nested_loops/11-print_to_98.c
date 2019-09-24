#include <stdio.h>
/**
   * print_to_98 - check the code for Holberton School students.
    *@n: integer
     * Return: Always 0.
      */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i < 99; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
}
