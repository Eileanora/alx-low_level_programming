#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root of
 *
 * Return: square root of n (int) or -1 if there is no answer
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
/**
 * _sqrt - returns the natural square root of a number
 * @n: number to get square root of
 * @i: number to check if it is the square root of n
 *
 * Return: square root of n (int) or -1 if there is no answer
*/
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
