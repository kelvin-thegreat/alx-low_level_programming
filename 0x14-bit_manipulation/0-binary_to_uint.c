#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:...
 * Return: converted Number
 */

unsigned int binary_to_uint(const char *b) 
{
	int i, length; 
	unsigned int result = 0;

	if (b == NULL) 
		return 0;

    	length = strlen(b);

    	for (i = 0; i < length; i++) 
	{
		if (b[i] != '0' && b[i] != '1')
			return 0;
        	result = (result << 1) + (b[i] - '0');
    	}

    	return result;
}
