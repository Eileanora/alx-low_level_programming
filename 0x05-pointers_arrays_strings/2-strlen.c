#include "main.h"
/**
 * _strlen - function returns length of a string
 * @s: string to find it's length
 * len: size of the string
 *
 * Return: int, the size of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
