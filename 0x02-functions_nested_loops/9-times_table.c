#include "main.h"
/**
 * times_table - shuf desc
 * Description: printi 9 times table
 * Return: void
 */
void times_table(void)
{
    int row, col, prod, ten_10, one_1;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            prod = row * col;
            ten_10 = prod / 10;
            one_1 = prod % 10;

            if (col == 0)
            {
                _putchar('0');
            }
            else if (prod < 10)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar(one_1 + '0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                _putchar(ten_10 + '0');
                _putchar(one_1 + '0');
            }
        }
        _putchar('\n');
    }
}