
#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: format is a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int n;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				n = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				n = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				n = 0;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				n = 0;
				break;
			default:
				n = 1;
				break;
		}
		if (format[i + 1] != '\0' && n == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}

