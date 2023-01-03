#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int num2, sum1 = 0, sum2 = 0;

	for (num2 = 0; num2 < size; num2++)
	{
		sum1 += a[(size + 1) * num2];
		sum2 += a[(size - 1) * (num2 + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
