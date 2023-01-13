#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * @ptr: pointer to the memory previously allocated with a call to malloc
 *
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) 
{
    unsigned int min_size;

    if (new_size == 0) 
    {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL)
    {
        return malloc(new_size);
    }

    if (new_size == old_size) {
        return ptr;
   
    }
    void *new_ptr = malloc(new_size);
    min_size = (old_size < new_size) ? old_size : new_size;
    memcpy(new_ptr, ptr, min_size);
    free(ptr);
    return (new_ptr);
}

