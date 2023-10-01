#include "main.h"



/**
 * check - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */

int check(int a, int b)

{

if (a * a == b)

return (a);

if (a * a > b)

return (-1);

return (check(a + 1, b));
}
