#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * i: counter
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (j == 0)
			{
				_putchar(n + '0');
			}
			else
			{
				if (n < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(n + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
