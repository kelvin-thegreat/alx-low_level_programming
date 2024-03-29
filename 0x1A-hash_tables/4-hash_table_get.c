#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 * */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int size, index;
    hash_node_t *tmp;

    if (ht == NULL || key == NULL)
        return (NULL);

    size = ht->size;
    index = key_index((const unsigned char *) key, size);
    tmp = ht->array[index];

    while (tmp != NULL)
    {
        if (strcmp(key, tmp->key) == 0)
            return (tmp->value);
        tmp = tmp->next;
    }

    return (NULL);
}
