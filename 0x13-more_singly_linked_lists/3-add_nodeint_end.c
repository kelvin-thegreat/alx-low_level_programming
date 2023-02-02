#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at end of list.
 * @head: ...
 * @n: ...
 * Return: ...
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
    	if (!new) 
		return NULL;
    	new->n = n;
    	new->next = NULL;

    	if (!*head)
       	{
        	*head = new;
   	}
       	else 
	{
        	listint_t *last = *head;
        	while (last->next) 
		{
            		last = last->next;
        	}
       	 	last->next = new;
    	}
    	return new;
}
