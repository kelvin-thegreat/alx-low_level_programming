#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: min.value
 * @max: max.value
 *
 * Return: the pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; min <= max ; min++, i++)
	{
		arr[i] = min;
	}
	return (arr);
}
