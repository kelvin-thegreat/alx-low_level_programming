#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_strings - function that prints String
  * @separator: tring to be printed
  * @n: number of strings
  *
  * Return: ...
  */

void print_strings(const char *separator, const unsigned int n, ...) 
{
	va_list args;
	unsigned int i;
	char *string;

    	va_start(args, n);
    	for (i = 0; i < n; i++)
       	{
        	string = va_arg(args, char*);
        	if (string == NULL) 
		{
			printf("(nil)");
        	} 
		else 
		{
            	printf("%s", string);
		}
		if (separator != NULL && i != n - 1)
		{

           		printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

