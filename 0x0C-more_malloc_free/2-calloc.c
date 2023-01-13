#include "main.h"
#include <stdlib.h>
/**
 * _calloc - using malloc to allocates memory for array
 * @nmemb: elements of array
 * @size: bytes of the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int l, h;
	char *array;

	h = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(h);

	if (array == NULL)
	{
		return (NULL);
	}
	for (l = 0 ; l < h ; l++)
	{
		array[l] = 0;
	}
	return (array);
}
