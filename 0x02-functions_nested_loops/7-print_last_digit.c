#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @y: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int y)
{
	if (y < 0)
		y = y * -1;
	_putchar((y % 10) + '0');
	return (y % 10);
}
