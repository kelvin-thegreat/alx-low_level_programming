#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int character = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[character])
	{
		if (s[character] == 45)
		{
			min *= -1;
		}

		while (s[character] >= 48 && s[character] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[character] - '0');
			character++;
		}

		if (isi == 1)
		{
			break;
		}

		character++;
	}

	ni *= min;
	return (ni);
}
