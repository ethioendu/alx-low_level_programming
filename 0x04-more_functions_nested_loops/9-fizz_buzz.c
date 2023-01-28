#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = 1;

while (n <= 100)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
if (n != 100)
{
putchar(' ');
}

n++;
}
putchar('\n');
return (0);
}
