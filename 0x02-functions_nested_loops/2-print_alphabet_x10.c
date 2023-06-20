#include "main.h"
/**
  * print_alphabet - shuf desc
  * Description: alphabet printer 97 -> 122
  * Return: just void
  */
void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}


/**
  * print_alphabet_x10 - shuf desc
  * Description: print the alphabet 10X
  * Return: always 0
  */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		print_alphabet();
	}
}

