#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: Input
 * Retur: Always 0
 */
void print_line(int n)
{
	int i;
	int line = 95;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(line);
		}
	}
_putchar('\n');
}
