#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	int character = 0;

	while (s[character] != '\0')
	{
		character++;
	}

	for (character -= 1; character >= 0; character--)
	{
		_putchar(s[character]);
	}

	_putchar('\n');
}
