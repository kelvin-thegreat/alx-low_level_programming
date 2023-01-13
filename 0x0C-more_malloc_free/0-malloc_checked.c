#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - using mallloc to allocate memory.
 * @b: memory allocated
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memallocate;

	memallocate = malloc(b);

	if (memallocate == NULL)
	{
		exit(98);
	}
	return (memallocate);

}
