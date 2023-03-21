#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * i: numbers counter
 * arr: characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	
	for (int i = 0; i < 9; i++)
		_putchar(arr[i]);
	_putchar('\n');
	return (0);
}
