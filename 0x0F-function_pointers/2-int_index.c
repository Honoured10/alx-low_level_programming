

#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Number of elements in the array
 * @cmp: Function to compare
 *
 * Return: Index of the first element for which
 * the cmp function does not return 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= -1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return  (i);
	}

	return (-1);
}
