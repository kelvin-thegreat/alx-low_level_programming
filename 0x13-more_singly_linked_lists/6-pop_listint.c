#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - ...
  * @head: ...
  *
  * Return: ...
  */

int pop_listint(listint_t **head)
{
	listint_t *current;
    	int n = 0;

    	if (*head == NULL)
	{
		current = *head;
    		n = current->n;
    		*head = current->next;
    		free(current);
	}
	return (n);
}

