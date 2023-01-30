#include <stdio.h>

/**
 * advance1 - prints a sentence before the main
 * function is executed
 */
void advance1(void) __attribute__ ((constructor));
void advance1(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
