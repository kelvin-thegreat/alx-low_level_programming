#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int arg1 = 0, arg2 = 0;

	if (argc == 3)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		printf("%d\n", arg1 * arg2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
