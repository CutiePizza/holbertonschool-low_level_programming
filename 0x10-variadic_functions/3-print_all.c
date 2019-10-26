#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all the parameters
 * @format: constant pointer to char
 */

typedef struct _types
{
	char s;
	void (*p)(va_list);
} t;



void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

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

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	void (*func)(va_list);
	va_list list;

	t array[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
	};

	va_start(list, format);

	while (format[i] != '\0')
	{
		while (j < 5)
		{
			if (array[j].s == format[i])
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
