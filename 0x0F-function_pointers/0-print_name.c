#include "function_pointers.h"

/**
  * print_name - Prototype function name to print name
  * @name: Name printed
  * @f: Function's Pointer
  *
  * Return: void or nothing
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
