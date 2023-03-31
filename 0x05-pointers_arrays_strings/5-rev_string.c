#include "main.h"
#include <string.h>
/**
 * rev_string - function to reverse string
 * @s: string to reverse
 * i: string begining
 * j: string end
 * len: string length
 *
 * Return: always void
 */

void rev_string(char *s)
{
	int len = 0, i = 0, j;

	len = strlen(s);
	j = len;
	while (i < j)
	{
		_swap(&(*(s + i)), &(*(s + j)));
		i++;
		j--;
	}
}

/**
 * _swap - function to reverse to characters
 * @a: first char
 * @b: second char
 * temp: temp char
 *
 * Return: always void
 */

void _swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
