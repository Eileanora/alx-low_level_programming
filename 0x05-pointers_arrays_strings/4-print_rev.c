#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 *
 * Return: always void
 */

void print_rev(char *s)
{
	rec(s);
	_putchar('\n');
}
/**
 * rec - print string recursivly
 * @s: string to print
 *
 * Return: always void
 */

void rec(char *s)
{
	if (*s == '\0')
		return;
	rec(s + 1);
	_putchar(*s);
}
