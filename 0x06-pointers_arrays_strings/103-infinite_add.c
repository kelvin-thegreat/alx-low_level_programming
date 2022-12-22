#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int len = (len1 > len2) ? len1 : len2;
int carry = 0;
int i; 

if (size_r < len + 1)
    return (0);

for (i = 0; i < len; i++)
{
    int a = (i < len1) ? n1[len1 - 1 - i] - '0' : 0;
    int b = (i < len2) ? n2[len2 - 1 - i] - '0' : 0;
    int c = a + b + carry;
    r[i] = (c % 10) + '0';
    carry = c / 10;
}

if (carry)
    r[len++] = carry + '0';
r[len] = '\0';

for (i = 0; i < len / 2; i++)
{
    char t = r[i];
    r[i] = r[len - 1 - i];
    r[len - 1 - i] = t;
}

return (r);
}

