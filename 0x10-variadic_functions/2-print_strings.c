#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function
 * @separator: A string to separate strings
 * @n: number unnamed parameters
 * Return: always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list val;

	va_start(val, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(val, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
