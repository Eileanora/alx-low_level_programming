#include "search_algos.h"
/**
 * print_array - prints an array
 * @l: left index
 * @r: right index
 * @array: array to print
 * Return: void
*/
void print_array(size_t l, size_t r, int *array)
{
	printf("Searching in array: ");
	while (l <= r)
	{
		if (l == r)
			printf("%d\n", array[l++]);
		else
			printf("%d, ", array[l++]);
	}
}
/**
 * advanced_binary - searches for the first occurance
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, otherwise -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, r = size, mid;

	while (l < r - 1)
	{
		print_array(l, r - 1, array);
		mid = l + (r - l) / 2;
		if (array[mid] >= value)
			r = mid;
		else
			l = mid;
	}
	if (array[l] == value)
		return (l);
	else
		return (-1);
}
