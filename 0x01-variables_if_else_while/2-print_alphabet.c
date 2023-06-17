#include <stdio.h>

/**
* main - print the letters lowercase,
* and a new line
* Return: return 0
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
