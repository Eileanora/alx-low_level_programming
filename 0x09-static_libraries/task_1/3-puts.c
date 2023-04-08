#include "main.h"
/**
 * _puts - prints a string, followed by a newline
 * @str: string to print
 *
 * Return: always void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
