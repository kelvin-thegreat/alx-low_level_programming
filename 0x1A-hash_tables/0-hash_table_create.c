#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 * If something went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *hash_t;
        unsigned long int i;

        hash_t = malloc(sizeof(hash_table_t));
        if (hash_t == NULL)
                return (NULL);
        hash_t->array = malloc(size * sizeof(hash_node_t *));
        if (hash_t->array == NULL)
                return (NULL);
        for (i = 0; i < size; i++)
                hash_t->array[i] = NULL;
        hash_t->size = size;
        return (hash_t);
}
