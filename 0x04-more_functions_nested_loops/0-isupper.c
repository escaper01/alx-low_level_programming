#include "main.h"

/**
 * _isupper - shuf descr
 * @c: character to be checked
 * Description: checker for uppercase
 * Return: 1 or 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
