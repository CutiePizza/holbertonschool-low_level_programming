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
#endif
