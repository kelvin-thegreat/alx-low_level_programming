#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * use the putchar
 * Return: 0
 * Print all the letters except q and e
 * use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * 
 * You can only use putchar twice in your code
 */

int main(void)
{
int lw = 'a';
while (lw <= 'z')
{
if (lw == 'e' || lw == 'q')
{
lw += 1;
}
else
{
putchar(lw);
lw += 1;
}
}
putchar('\n');
return (0);
}

