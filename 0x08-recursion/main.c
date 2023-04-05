#include "main.h"

char _putchar(char c)
{
	putchar(c);
	return c;
}
/*---------------------------------------------------------------------------------------------------------------------------*/

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_check_prime(n, 2));
}
/**
 * _check_prime - checks if a number is prime
 * @n: number to check
 * @i: factor to check with
 *
 * Return: 1 if prime, 0 if not
*/
bool _check_prime(int n, int i)
{
	if (n % i == 0)
		return (n == 2);
	if (i * i > n)
		return (true);
	return (_check_prime(n, i + 1));
}
/*------------------------------------------------------------------------------------------------------------------------------------*/
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}