#include "search_algos.h"
#include <stdlib.h>

/**
 * linear_search - searches for an element using the linear search algorithm
 * @array: the array to search in
 * @size: array size
 * @value: value to search for
 * Return: index of value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
