#include "main.h"
/**
 * puts2 - rints every other character of a string
 * @str: string to print
 * i: index counter
 *
 * Return: always void
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
