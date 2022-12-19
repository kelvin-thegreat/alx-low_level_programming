#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 * Return: nothing.
 */

void rev_string(char *s)
{
        int i = 0;
        int aux = 0;
        char rev;

        while (*(s + i) != '\0')
		i += 1;
        i -= 1;

        while (aux < i)
        {
                rev = s[i];
                s[i] = s[aux];
                s[aux] = rev;
                aux++;
                i--;
        }
}
