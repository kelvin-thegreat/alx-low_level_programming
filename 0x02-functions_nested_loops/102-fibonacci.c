#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */

int main(void)
{
        long i = 0;
        long j = 1;
        int n = 0;
        long f;

        while (n < 50)
        {
                f = j + i;
                if (n != 49)
                        printf("%ld, ", f);
                else
                        printf("%ld\n", f);
                i = j;
                j = f;
                n += 1;
        }
        return (0);
}

