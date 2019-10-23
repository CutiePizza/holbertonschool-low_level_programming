#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - function thzt prints a name
  * @name: Name to print, string
  * @f: pointer to function
  */

void print_name(char *name, void (*f)(char *))
{	
	if (f == NULL || name == '\0')
		return;
	f(name);
}
