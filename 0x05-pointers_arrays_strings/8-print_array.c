#include "main.h"
/**
 * print_array - print n elements of array of its
 * @a: array address
 * @n: array size
 * i: counter
 *
 * Return: always void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
