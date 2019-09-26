#include <stdio.h>

int main(void)
{
long long int a = 612852475143;
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
printf("%d", b);
printf("\n");
return (0);
}
