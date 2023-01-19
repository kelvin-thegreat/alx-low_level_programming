#include "function_pointers.h"
#include <stddef.h>

/**
  * print_name - print name
  * @name: Name printed
  * @f: Pointer of function print_nam
  *
  * Return: void or nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if ( name != NULL)
	{
		f(name);
	}
}
