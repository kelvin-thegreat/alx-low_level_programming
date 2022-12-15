#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: intput
 */
void print_number(int n)
{
	unsigned int t = n;

	if (n < 0)
	{
		_putchar('-');
		t = -t;
	}
	if (t / 10)
	{
		print_number(t / 10);
	}
	_putchar(t % 10 + '0');
}
