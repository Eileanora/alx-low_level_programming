#include "main.h"

/**
 * print_numbers - print numbers from 1 to 9
 * i: counter
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
