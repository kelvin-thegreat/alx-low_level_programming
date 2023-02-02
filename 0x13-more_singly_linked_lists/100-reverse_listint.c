#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - singly linked list
 * @head: ...
 * @next: points to the next node
 *listint_t:...
 * return: ...
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *prev = NULL;
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
	return (NULL);
}
