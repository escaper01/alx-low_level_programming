#include <stdio.h>

/**
* main - print the letter (lowercase)
* and new line but not e or q
* Return: returns 0
*/
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
