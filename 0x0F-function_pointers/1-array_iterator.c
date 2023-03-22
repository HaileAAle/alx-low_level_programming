#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: the given array
 * @size_t: is the size of the array
 * @action: is a pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
