#include <stdio.h>

/**
 * main - Entry point
 * i: first counter
 * j: second counter
 * k: third counter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j, k;

	for (; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
