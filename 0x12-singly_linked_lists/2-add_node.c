#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that prints all the elements of a list_t list
 * @head: input header pointer
 * @str: Input string value
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *n_node;

        n_node = malloc(sizeof(list_t));
        if (n_node == NULL)
                return (NULL);
        n_node->len = _strlen(str);
        n_node->str = strdup(str);
        n_node->next = *head;
        *head = n_node;
        return (n_node);
}

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */

int _strlen(const char *s)
{
        int i;

        while (s[i] != 0)
                i++;
        return (i);
}
