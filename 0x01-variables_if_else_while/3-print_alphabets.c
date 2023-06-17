#include <stdio.h>

/**
 * main - prints the letters (lowercase, uppercase) ,
 * and new line  
 * Return: return 0
 */
int main(void)
{
    int ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
    for (ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);
    putchar('\n');
    return (0);
}
