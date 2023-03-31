#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * temp: temp integer to swap
 *
 * Return: always void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
