#include <stdio.h>
/**
 * main - Entry main function
 *
 * Return: Always 0
 */
int main(void)
{
long int a = 612852475143;
int b = 2;

while (a > b)
{
if (a % b == 0)
{
a = a / b;
b = 2;
}
else
b += 1;
}
printf("%d\n", b);
return (0);
}
