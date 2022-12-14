#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @x: The input number to check
 * Return: int.
 */

int print_last_digit(int number)
{

        number %= 10;

        if (number < 0)
                number *= -1;

        _putchar(number + '0');
        return (number);
}


