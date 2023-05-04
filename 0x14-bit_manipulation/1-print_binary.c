#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int i;

	for (int i = 31; i >= 0; i--)
	{
		if (n & (1 << i))
			_putchar('1');
		else
			_putchar('0');
	}
}
