#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = sizeof(n) * 8 - 1;
	unsigned int count = 0;

	for (; i >= 0; i--)
	{
		if ((n ^ m) & (1 << i))
			count++;
	}
	return (count);
}
