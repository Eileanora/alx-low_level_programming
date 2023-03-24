#include "main.h"

/**
 * call - prints number
 * @n: number
 * i: digit
 *
 * Return: void
 */
void call(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		return;
	call(n / 10);
	/*_putchar((n % 10) + '0');*/
}
/**
 * print_number - call recursivlu
 * @n: number
 *
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	call(n);
}
