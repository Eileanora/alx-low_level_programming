#include "main.h"
#include <stdlib.h>
/**
 * _strlen - checks the size of a given string
 * @str: string to check size of
 *
 * Return: size of string (int)
 */
int _strlen(char *str)
{
	int sz = 0;

	while (*str != '\0')
	{
		sz++;
		str++;
	}
	return (sz);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (success)
 * NULL if str == NULL or str == "" or if function fails
 */
char **strtow(char *str)
{
}
