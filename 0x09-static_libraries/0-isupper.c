#include "main.h"
#include <stdio.h>
/**
 *_isupeer - a function that checks for uppercase character
 * 
 * Return: 1
 */
int _isupper(int c)
{
if((c >='A') && (c <= 'Z'))
	return (1);
	else
		return (0);
}
