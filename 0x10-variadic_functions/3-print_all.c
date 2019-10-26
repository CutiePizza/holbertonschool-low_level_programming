#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

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

	va_start(list, format);

	while (format[i] != '\0')
	{
		while (array[j].s != NULL)
		{
			if (array[j].s[0] == format[i])
			{
				func = array[j].p;
				func(list);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
