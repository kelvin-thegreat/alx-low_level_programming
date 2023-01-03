#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int num1 = 0, num2;

	while (s[num1])
	{
		num2 = 0;

		while (accept[num2])
		{
			if (s[num1] == accept[num2])
			{
				s += num1;
				return (s);
			}

			num2++;
		}

		num1++;
	}

	return ('\0');
}
