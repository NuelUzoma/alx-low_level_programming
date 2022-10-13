#include "function_pointers.h"

/**
 * array_iterator - executes a functiongiven as a parameter of
 * each element of an array
 * @array: array
 * @size: unsigned integer
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
