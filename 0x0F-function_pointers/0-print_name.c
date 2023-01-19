#include "function_pointers.h"
#include <stddef.h>
/**
  * print_name - Prints name
  * @name: The name printed
  * @f: Pointer to function
  * @*: locate any charcter
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if( name != NULL && f !=NULL)
	{
		f(name);
	}
}
