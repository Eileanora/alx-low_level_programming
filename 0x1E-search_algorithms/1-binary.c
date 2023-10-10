#include "search_algos.h"
/**
 * print_array - prints an array
 * @l: left index
 * @r: right index
 * @array: array to print
 * Return: void
*/
void print_array(int l, int r, int *array)
{
	printf("Searching in array: ");
	while (l < r - 1)
		printf("%d ,", array[l++]);
	printf("%d", array[l]);
}
/**
 * binary_search - searches for an element using the binary search algorithm
 * @array: the array to search in
 * @size: array size
 * @target: value to search for
 * Return: index of target or -1 if not found
*/
int binary_search(int *array, size_t size, int target)
{
	int l = 0, r = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		mid = l + (r - l) / 2;
		if (array[mid] == target)
			return (mid);
		else if (target < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
