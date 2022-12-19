#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main()
{
    int counter = 0;
    srandom(time(NULL));
    char randChar;

    int  passwordLength;

    printf("Type in a password Length \n");
    scanf("%d", &passwordLength);

    while(counter < passwordLength)
    {
        randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[random () % 62];
        printf("%c", randChar);
        counter++;
    }
    printf("\n");
    return 0;
}
