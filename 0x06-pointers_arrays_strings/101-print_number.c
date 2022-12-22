#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int y;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	y = n;

	if (y / 10)
		print_number(y / 10);

	_putchar(y % 10 + '0');
}
