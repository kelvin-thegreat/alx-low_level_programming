#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add operation
  * @a: integer a
  * @b: integer b
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtraction
  * @a: integer a
  * @b: integer b
  *
  * Return: subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplication operation
  * @a: integer a
  * @b: integer b
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division operation
  * @a: integer a
  * @b: integer b
  *
  * Return: division 
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
  * op_mod - mod operation
  * @a: integer
  * @b: integer
  *
  * Return: modulus
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
