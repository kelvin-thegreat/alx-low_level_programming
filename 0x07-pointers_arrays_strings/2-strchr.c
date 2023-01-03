#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int num1 = 0, num2;

	while (s[num1])
	{
		num1++;
	}

	for (num2 = 0; num2 <= num1; num2++)
	{
		if (c == s[num2])
		{
			s += num2;
			return (s);
		}
	}

	return ('\0');
}
