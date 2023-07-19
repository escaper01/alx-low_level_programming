#include <stdlib.h>
#include "function_pointers.h"


/**
  * print_name - name printer
  * @name: name
  * @f: func ptr that prints str
  * Description: call f to print a name
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

