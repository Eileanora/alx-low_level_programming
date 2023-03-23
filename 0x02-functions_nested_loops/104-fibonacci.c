#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 * i: counter
 * fib1: fib(1)
 * fib2: fib(2)
 * sum: holds fib(1) + fib(2)
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i = 0, fib1 = 0, fib2 = 1, temp;

	for (; i < 98; i++)
	{
		temp = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = temp;
	}
	printf("%lu\n"m fib1 + fib2);
	return (0);
}
