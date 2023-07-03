#include "main.h"
/**
* _strspn - get the length of a prefix substring
* @s: custom str
* @accept: str of accepted chars.
* Return: number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	int j = 0;
	int i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				a++;
			}

			j++;
		}

		i++;
		j = 0;
	}

	return (a);
}
