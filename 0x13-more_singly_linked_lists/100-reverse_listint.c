#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * return: ...
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL;
    	/*listint_t *current = *head;*/
    	listint_t *next = NULL;
	if (head)
	{
    		while (*head)
    		{
        		next = *head;
			*head = (*head)->next;
        		next->next = prev;
        		prev = next;
    		}
    		*head = prev;
    		return (*head);

	}
	return (NULL)
}

