

#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Test
 * @s: String to compare
 * Return: Pointer to function
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);

		i++;
	}


	return (NULL);
}
