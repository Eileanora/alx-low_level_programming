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
	if (n == 0)
		return;
	print_number(n / 10);
	_putchar((n % 10) + '0');
}
/**
 * print_number - call recursivlu
 * @n: number
 *
 * Return: void
 */
void print_number(int n)
{
	call(n);
	_putchar('\n');
}
