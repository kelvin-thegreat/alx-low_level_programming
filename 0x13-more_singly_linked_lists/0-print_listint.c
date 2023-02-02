#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a `listint_t` list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	/* Keep track of number of nodes */
	size_t count = 0;

   	/* Iterate through each node in the list */
    	while (h != NULL)
   	{
        	/* Print the value of the current node */
        	printf("%d\n", h->n);
        	/* Move to the next node in the list */
       	 	h = h->next;
        	/* Increment the node count */
       	 	count++;
    	}

    	/* Return the number of nodes in the list */
   	return count;
}

