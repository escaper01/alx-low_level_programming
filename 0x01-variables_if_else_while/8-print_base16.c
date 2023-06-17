#include <stdio.h>

/**
 * main - get the nums of base 16(lowercase) and ln
 * Return: returns 0
 */
int main(void)
{
    int n;
    char ch;

    for (n = 48; n < 58; n++)
    {
        putchar(n);
    }
    for (ch = 'a'; ch <= 'f'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}
