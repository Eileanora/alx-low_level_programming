#include "main.h"
/**
 * _strlen_recursion - returns the string length
 * @s: string to get length of
 *
 * Return: Always int (length of string)
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
