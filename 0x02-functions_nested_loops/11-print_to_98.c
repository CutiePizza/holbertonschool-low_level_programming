#include "holberton.h"
#include <stdio.h>
/**
   * print_to_98 - check the code for Holberton School students.
    *@n: integer
     * Return: Always 0.
      */
void print_to_98(int n)
{
int i;

for (i = n; i < 99; i++)
{
printf("%i", i);
if (i != 98)
printf(", ");
}
printf("\n");
}
