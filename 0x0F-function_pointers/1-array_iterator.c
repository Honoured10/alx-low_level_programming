

#include "function_pointers.h"


/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @array: Array to print
 * @size: Size of the array
 * @action: Pointer to the function (Decorator)
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size <= 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}

}
