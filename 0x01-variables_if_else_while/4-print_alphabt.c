#include <stdio.h>

/**
 * main - Entry point
 * c: lowercase counter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
