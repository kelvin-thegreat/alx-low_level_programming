#include "function_pointers.h"
/**
  * int_index - searches for integer
  * @size: no of elements in array
  * @cmp: pointer to function 
  * @array: array
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int iterator = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (iterator < size)
			{
				if (cmp(array[iterator]))
					return (iterator);
				iterator++;
			}
		}
	}
	return (-1);
}
