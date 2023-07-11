#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 *               of integers using linear skip search.
 * @list: A pointer to the head of the skip list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       jump->express->index, jump->express->n);
			if (jump->express->n >= value)
			{
				jump = jump->express;
				break;
			}
			jump = jump->express;
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       node->index, jump->index);

	for (; node != NULL && node->index <= jump->index; node = node->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       node->index, node->n);
		if (node->n == value)
			return (node);
	}

	return (NULL);
}

