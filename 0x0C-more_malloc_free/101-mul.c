#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @num2: argument vector for values
 * @num1: argument count
 *
 * Return: Always 0 (Success)
 */
int main(int num1, char *num2[])
{
	int mul;

	if (num1 == 3)
	{
		mul = atoi(num2[1]) * atoi(num2[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (98);
	}
	return (0);
}
