#include <stdlib.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;
	while (current != NULL)
	{
		count++;
        	current = current->next;
    	}
	return (count);
}

