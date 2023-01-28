#include "main.h"


/**
 * print_line - function that draws a straight line
 * @n:input number of times to print
 * Return: a straight line
 */


void print_line(int n)
{
int i = 0;

while (i < n && n > 0)
{
_putchar('_');
i++;
}
_putchar('\n');
}
