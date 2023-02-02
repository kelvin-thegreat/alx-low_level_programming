#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list, detecting loops
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h, *temp;
    	size_t count = 0;

    	while (fast && fast->next)
    	{
        	slow = slow->next;
        	fast = fast->next->next;
       	 	count++;
        	if (slow == fast)
        	{
            	fast = *h;
           	while (fast != slow)
            	{
                	slow = slow->next;
                	temp = fast->next;
                	free(fast);
                	fast = temp;
                	count--;
            	}
           	free(slow);
            	*h = NULL;
            	return count;
        	}
    	}

    	while (*h)
    	{
        	temp = (*h)->next;
        	free(*h);
        	*h = temp;
        	count++;
    	}

    	*h = NULL;
    	return count;
}

