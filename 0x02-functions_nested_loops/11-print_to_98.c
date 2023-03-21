#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start
 * i: counter
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
		for (; i < 98; i++)
			printf("%d, ", i);
	else
		for (; i > 98; i--)
			printf("%d, ", i);
	printf("%d\n", 98);
}
