#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int arg;
	unsigned int k, sum = 0;
	char *err;

	if (argc > 1)
	{
		for (arg = 1; arg < argc; arg++)
		{
			err = argv[arg];

			for (k = 0; k < strlen(err); k++)
			{
				if (err[k] < 48 || err[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(err);
			err++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

