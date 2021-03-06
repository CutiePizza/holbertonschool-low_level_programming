#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_c - print char
 * @c: list
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_i - print char
 * @i: list
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_f - print char
 * @f: list
 */


void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_s - print char
 * @s: list
 */


void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}
/**
 * print_all - print all the parameters
 * @format: constant pointer to char
 */

void print_all(const char * const format, ...)
{
	t array[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	unsigned int i = 0, j = 0;
	void (*func)(va_list);
	va_list list;
	char *sep = "";

	va_start(list, format);

	while (format && format[i])
	{	j = 0;
		while (array[j].s != NULL)
		{
			if (array[j].s[0] == format[i])
			{
				printf("%s", sep);
				func = array[j].p;
				func(list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
