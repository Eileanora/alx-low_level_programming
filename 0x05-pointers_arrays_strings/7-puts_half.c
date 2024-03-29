#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of the string
 * @str: string to print
 * len: string length
 * i: counter
 *
 * Return: always void
 */

void puts_half(char *str)
{
	int len, i = 0;

	len = strlen(str);
	while (i < len)
	{
		if (i >= (len + 1) / 2)
			_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
