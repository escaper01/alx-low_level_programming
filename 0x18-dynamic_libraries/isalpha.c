#include "main.h"

/**
  * _isalpha - shuf desc
  * Description: alpha checker
  * @c: alpha to check
  * Return: return 1 or 0
  */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
