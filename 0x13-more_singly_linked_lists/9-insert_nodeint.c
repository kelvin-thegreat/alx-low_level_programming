#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - ...
  * @head: ...
  * @idx: ...
  * @n: ...
  *
  * Return: ...
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *itr;
	unsigned int current = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			itr = *head;
			while (itr)
			{
				if (current == idx)
				{
					new->next = itr->next;
					itr->next = new;
					return (new);
				}
				itr = itr->next;
				current++;
			}
			if (idx > current)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}

