#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: given name
 * @f: function of name
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}

