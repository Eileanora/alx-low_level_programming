#include <stdio.h>

/**
 * main - Entry point
 * i: numbers counter
 * c: characters counter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	for (; i <= 9; i++)
		putchar(i + '0');
	for (; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
