#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * get_nodeint_at_index - ...
  * @head: ...
  * @index: ...
  *
  * Return: ...
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current = 0;

	if (head)
	{
		while (head)
		{
			if (current == index)
				return (head);

			head = head->next;
			current++;
		}
	}

	return (NULL);
}
