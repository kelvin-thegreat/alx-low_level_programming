#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

#define PASSWORD_LENGTH 8

int main()
{
    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Create an array to store the password */
    char password[PASSWORD_LENGTH + 1];

    /* Generate random characters for the password */
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = rand() % 26 + 'a';
    }

    /* Terminate the password string*/
    password[PASSWORD_LENGTH] = '\0';

    /* Print the generated password*/
    printf("Generated password: %s\n", password);

    return 0;
}

