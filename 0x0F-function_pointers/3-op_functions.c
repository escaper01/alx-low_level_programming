#include "3-calc.h"
/**
 * op_add - add two num
 * @a: num a
 * @b: num b
* Description: add two num
* Return: result of add
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calc sub of two number
 * @a: num a
 * @b: num b
* Description: calc sub of two number
* Return: result of sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this function multiply two numbers
 * @a: num a
 * @b: num b
* Description: shuf desc
* Return: result of muliply
*/

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calc multiplication
 * @a: num a
 * @b: num b
* Description: sef desc
* Return: result of divide
*/

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}

	printf("Error\n");
	exit(100);
}
/**
 * op_mod - calc module
 * @a: num a
 * @b: num b
* Description: shuf desc
* Return: result of module
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
