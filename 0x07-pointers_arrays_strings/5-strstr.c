#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int num1 = 0, num2 = 0;

	while (haystack[num1])
	{
		while (needle[num2])
		{
			if (haystack[num1 + num2] != needle[num2])
			{
				break;
			}

			num2++;
		}

		if (needle[num2] == '\0')
		{
			return (haystack + num1);
		}

		num1++;
	}

	return ('\0');
}
