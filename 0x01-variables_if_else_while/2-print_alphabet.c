#include <stdio.h>

/**
 * main - Entry point
 * c: character to print
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

