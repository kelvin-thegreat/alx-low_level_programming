#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator -  executes a function 
  * @array: store integers
  * @size: size of array
  * @action: ponter to function
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int value = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (value < size)
		{
			action(array[value]);
			value++;
		}
	}
}
