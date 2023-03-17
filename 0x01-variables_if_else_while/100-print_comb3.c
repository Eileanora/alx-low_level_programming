#include <stdio.h>

/**
 * main - Entry point
 * i: first counter
 * j: second counter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1;

	for (; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
