#include <stdio.h>

/**
 * main - program that prints all possible combinations of
 * two two-digit
 * The numbers should range from 0 to 99
 * Numbers must be separated by ,followed by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: 0
 */

int main(void)
{
        int num1 = 48;
        int i = 0;
        int j;
        int combination5 = 44;

        while (i <= 99)
        {
                j = i + 1;
                while (j <= 99)
                {
                        putchar((i / 10) + num1);
                        putchar((i % 10) + num1);
                        putchar(32);
                        putchar((j / 10) + num1);
                        putchar((j % 10) + num1);
                        if (i != 98 || j != 99)
                        {
                                putchar(combination5);
                                putchar(32);
                        }
                        j += 1;
                }
                i += 1;
        }
        putchar('\n');
        return (0);
}

