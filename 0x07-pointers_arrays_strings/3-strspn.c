#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num1 = 0, num2, num3 = 0;

	while (accept[num1])
	{
		num2 = 0;

		while (s[num2] != 32)
		{
			if (accept[num1] == s[num2])
			{
				num3++;
			}

			num2++;
		}

		num1++;
	}

	return (num3);
}
