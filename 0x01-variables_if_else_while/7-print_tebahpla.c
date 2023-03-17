#include <stdio.h>

/**
 * main - Entry point
 * c: lowercase counter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
