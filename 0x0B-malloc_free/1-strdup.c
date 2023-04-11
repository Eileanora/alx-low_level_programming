#include "main.h"
#include <stdlib.h>.0
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
 * _strdup - allocates space in memory, which contains a copy of a given string
 * @str: string to copy
 *
 * Return: pointer to new allocated space (success)
 * NULL if ptr is NULL or if no sufficient memory (fail)
*/
char *_strdup(char *str)
{
	int sz, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	sz = _strlen(str);
	ptr = malloc(sizeof(char) * sz);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sz; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
