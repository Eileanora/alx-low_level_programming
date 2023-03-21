#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to check
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int d = (n % 10);

	if (d < 0)
		d *= -1;
	_putchar(n + '0');
	return (n);
}
