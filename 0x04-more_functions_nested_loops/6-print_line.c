#include "main.h"

/**
 * print_line - draws a straight line
 * @n: line length
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');

}
