#include <stdlib.h>
#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 */

void free_list(list_t *head)
{
	list_t *current;
    	list_t *next;

    	while (current != NULL)
    	{
        	current =  head;
		head = head -> next;
        	free(current->str);
        	free(current);
    	}
}

