#include "main.h"

/**
  * _memcpy - copy memory area
  * @dest: dest memory area
  * @src: source memory area
  * @n: bytes from memory area to copy
  *
  * Return: memory area replaced
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		dest[num] = src[num];
	}

	return (dest);
}
