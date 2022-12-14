#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @t: The input number to check
 * Return: int.
 */

int print_last_digit(int t)
{

        t %= 10;

        if (t < 0)
                t *= -1;

        _putchar(t + '0');
        return (t);
}


