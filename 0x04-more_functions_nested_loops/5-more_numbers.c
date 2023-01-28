#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0- 14
 *
 * Return: 0 to 14 times 10
 */

void more_numbers(void)
{
char r, i;
int n = 0;

while (n < 10)
{
for (r = 0; r <= 14; r++)
{
i = r;
if (r > 9)
{
_putchar('1');
i = r % 10;
}
_putchar('0' + i);
}

_putchar('\n');
n++;
}
}
