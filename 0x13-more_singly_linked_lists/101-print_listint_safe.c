#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list, detecting loops
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
    	size_t count = 0;

    	while (fast && fast->next)
    	{
        	count++;
        	slow = slow->next;
       	 	fast = fast->next->next;
        	if (slow == fast)
        	{
            	printf("-> [%p] %d\n", (void *)slow, slow->n);
            	exit(98);
        	}
    	}

    	for (count = 0; head; count++)
    	{
        	printf("[%p] %d\n", (void *)head, head->n);
        	head = head->next;
    	}

    	return count;
}

