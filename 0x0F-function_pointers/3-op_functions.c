#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function with two arguments
  * @a: int type
  * @b: int type
  *
  * Return: value
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function with two arguments
  * @a: int type
  * @b: int type
  *
  * Return: value
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function with two arguments
  * @a: int type
  * @b: int type
  *
  * Return: value
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function with two arguments
  * @a: int type
  * @b: int type
  *
  * Return: value
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function with two arguments
  * @a: int type
  * @b: int type
  *
  * Return: valuew
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

