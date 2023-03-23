#include "main.h"

/**
 * print_diagonal - draws a diagonal of length n
 * @n: diagonal length
 * i: first counter ( \\ )
 * j: second counter (spaces)
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_puthchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}