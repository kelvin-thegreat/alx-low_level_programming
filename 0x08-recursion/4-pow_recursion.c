#include "main.h"

/**
  * _pow_recursion - Returns the integer value of x raised to the power of y
  * @x: the integer or value to multiply with the power y
  * @y: the power or times to multiply the value x
  *
  * Return: the integer or value multiplied by power y or y times
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
