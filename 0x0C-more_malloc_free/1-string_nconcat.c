#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of a string
 * @s: a string
 *
 * Return: length of a string
 * 
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytesize  of string 2
 *
 * Return: a pointer with the content of string 1, s1 and n byte of string 2 s2
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, i, j;
	char *sp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n >= length2)
	{
		n = length2;
	}

	sp = malloc(sizeof(char) * (n + length1 + 1));

	if (sp == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < length1 ; i++)
		sp[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' && j != n ; j++, i++)
		sp[i] = s2[j];

	sp[i] = '\0';
	return (sp);
}
