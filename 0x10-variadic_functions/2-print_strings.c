#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - print strings givin as paramters
 * @separator: the string to be printed between the strings
 * @n: number of strings to print
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);
		printf("%s", s == NULL ? "(nil)" : s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
