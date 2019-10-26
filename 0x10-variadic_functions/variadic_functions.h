#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
/**
   * struct _types - Struct types
    *
     * @s: The type
      * @p: The function associated
       */

typedef struct _types
{
	char *s;
	void (*p)(va_list);
} t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

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
#endif
