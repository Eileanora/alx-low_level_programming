#include <stdio.h>

/**
 * main - Entry point
 * c: lowercase counter
 * C: uppercase counter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a', C = 'A';

	for (; c <= 'z'; c++)
		putchar(c);
	for (; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
