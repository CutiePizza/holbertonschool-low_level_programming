#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - Print strings followed by a new line
  * @separator: string, separator
  * @n: Number of parameters
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *_char;

	if (n == 0)
		return;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		_char = va_arg(list, char*);
		if (!(_char))
		{
			printf("(nil)");
		}
		else
			printf("%s", _char);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
	}
printf("\n");
va_end(list);
}
