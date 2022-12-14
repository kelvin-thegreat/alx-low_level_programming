#include "main.h"

/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
        int n = 0;
        char str_greet[8] = "_putchar";

        while (n < 8)
        {
                _putchar(str_greet[n]);
                n += 1;
        }
        _putchar('\n');
        return (0);
}

