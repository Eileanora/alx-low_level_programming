#include "main.h"

/**
 * print_num - print number recursivly
 * @n: number to print
 *
 * Return: void
 */
void print_num(int n)
{
	if (n == 0)
		return;
	print_num(n / 10);
	_putchar((n % 10) + '0');
}
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: start
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			print_num(k);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
