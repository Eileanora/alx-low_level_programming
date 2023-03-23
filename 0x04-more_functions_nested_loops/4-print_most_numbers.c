#include "main.h"

/**
 * print_most_numbers - print numbers from 1 to 9 except 2 , 4
 * i: counter
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
