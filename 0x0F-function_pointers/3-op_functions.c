#include "3-calc.h"

/**
 * op_add - Add to numbers
 * @a: Number 1
 * @b: Number 2
 * Return: Sum
 **/
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Substract to numbers
 * @a: Number 1
 * @b: Number 2
 * Return: Rest two numbers
 **/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiply to numbers
 * @a: Number 1
 * @b: Number 2
 * Return: The result of multiply a with b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divide to numbers
 * @a: Number 1
 * @b: Number 2
 * Return: Division
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
 * op_mod - Modulo
 * @a: Number 1
 * @b: Number 2
 * Return: Modulo
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
