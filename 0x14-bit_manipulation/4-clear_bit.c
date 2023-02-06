#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */

int clear_bit(unsigned long int *n, unsigned int index) 
{
	if (index >= sizeof(*n) * 8) 
	{
        	return -1;
    	}
    	*n &= ~(1UL << index);
    	return 1;
}
