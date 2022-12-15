#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: Input
 * Return: Always 0
 */
void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
