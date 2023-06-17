#include <stdio.h>

/**
* main - get the letter reversed and nl,
* Return: returns 0
*/
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
