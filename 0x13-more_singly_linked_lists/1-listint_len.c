#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked `listint_t` list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* Keep track of number of elements */
	/* Iterate through each node in the list */
    	while (h != NULL)
    	{
        	/* Move to the next node in the list */
        	h = h->next;
		/* Increment the element count */
        	count++;
    	}

    	/* Return the number of elements in the list */
    	return (count);
}
