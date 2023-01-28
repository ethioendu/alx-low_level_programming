#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size :  the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int n, i;

if (size > 0)
for (n = size; n > 0; n--)
{
for (i = 1; i <= size; i++)
if (i >= n)
_putchar('#');
else
_putchar(' ');
_putchar('\n');
}
else
_putchar('\n');
}
