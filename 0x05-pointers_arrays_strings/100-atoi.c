#include "main.h"
#include <stdbool.h>
/**
 * _atoi - converts a string to int
 * @s: string to convert
 * ans: the result
 * minus: bool to determine if the number is negative
 *
 * Return: int - the converted string
 */

int _atoi(char *s)
{
	unsigned int ans = 0;
	bool minus = false;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			ans *= 10;
			ans += (*s - '0');
		}
		else if (*s == '-')
			minus = !minus;
		else if (ans != 0)
			break;
		s++;
	}
	if (minus)
		ans *= -1;
	return (ans);
}
