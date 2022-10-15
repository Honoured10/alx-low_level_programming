#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Returns 0 if all its ok
 **/
int main(int argc, char **argv)
{
	int number_a, number_b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number_a = atoi(argv[1]);
	number_b = atoi(argv[3]);


	if (get_op_func(argv[2]) ==  NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = get_op_func(argv[2])(number_a, number_b);
	printf("%d\n", res);

	return (0);
}
