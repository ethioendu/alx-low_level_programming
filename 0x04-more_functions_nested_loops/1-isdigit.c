#include "main.h"
#include <stdio.h>

/**
 * _isdigit - a function that checks for a digit 0-9
 *@c:input
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
