#include <stdio.h>

/**
 * main - Entry point
 * i: numbers counter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
