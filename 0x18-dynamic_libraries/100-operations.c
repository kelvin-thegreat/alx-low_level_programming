#include <stdio.h>

/**
 * add - addition
 * @a: ...
 * @b: ...
 *
 * Return: value of operation
 */

int add(int a, int b)
{
    return a + b;
}

/**
 * sub - subtraction
 * @a: ...
 * @b: ...
 *
 * Return: value of operation
 */

int sub(int a, int b) 
{
    return a - b;
}

/**
 * mul - multiplication
 * @a: ...
 * @b: ...
 *
 * Return: value of operation
 */

int mul(int a, int b) 
{
    return a * b;
}

/**
 * div - division
 * @a: ...
 * @b: ...
 *
 * Return: value of operation
 */

int div(int a, int b) {
    if (b == 0) {
        printf("Error: division by zero\n");
        return 0;
    } else {
        return a / b;
    }
}

/**
 * mod - divisibility test
 * @a: ...
 * @b: ...
 *
 * Return: value of operation
 */

int mod(int a, int b) {
    if (b == 0) {
        printf("Error: division by zero\n");
        return 0;
    } else {
        return a % b;
    }
}

