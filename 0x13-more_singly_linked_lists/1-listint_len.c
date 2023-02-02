#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked `listint_t` list.
 * @h: Pointer to the head of the list.
 * listint_t: list.
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	
    	while (h != NULL)
    	{
        	h = h->next;
        	count++;
    	}

    	return (count);
}
