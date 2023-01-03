#include "main.h"

/**
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int num2, num3;

	for (num2 = 0; num2 < 8; num2++)
	{
		for (num3 = 0; num3 < 8; num3++)
		{
			_putchar(a[num2][num3]);
		}

		_putchar('\n');
	}
}
