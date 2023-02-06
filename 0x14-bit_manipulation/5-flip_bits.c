#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
    	unsigned long int xor_result = n ^ m;
    	while (xor_result) 
	{
        	count += xor_result & 1;
       	 	xor_result >>= 1;
    	}
    	return count;
}

