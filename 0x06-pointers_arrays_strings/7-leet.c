#include "main.h"
/**
 *leet - a function that encodes a string into 1337.
 *@s: string to make it crypted
 *Return: pointer to s .
 */

char *leet(char *s)
{
	int arr[] = {'4', '3', '0', '7', '1'};
	char *a = "aeotl";
	char *b = "AEOTL";
	char *p = s;
	int i;

	while (*s != '\0')
	{

	for (i = 0; i < 5; i++)
	{
		if (*s == *(a + i) || *s == *(b + i))

			*s = arr[i];
	}
		s++;

	}
		return (p);
}
