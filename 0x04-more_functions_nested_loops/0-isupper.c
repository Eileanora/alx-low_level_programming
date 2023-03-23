#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: char to check
 *
 * Return: 1 if uppercase , 0 if lowercase
 */
int _isupper(c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
