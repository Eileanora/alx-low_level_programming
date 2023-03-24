#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 times
 * i: 0 to 14 counter
 * j: 10 times counter
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
			_putchar(i + '0');
		for (; i <= 14; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
