#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}

