#include "main.h"
#include <stdio.h>

/**
  * print_times_table - shuf desc
  * @n: n time
  * Description: print n times table starting with 0
  * Return: void
  */
void print_times_table(int n)
{
	int i, j;
	int num = 0;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num += i;
			if ((i == 0) || (j == 0))
			{
				num = 0;
			}
			printf("%d,\t", num);	
		}
		printf("\n");
	}

}