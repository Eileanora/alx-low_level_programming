#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase otherwise returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (_isalpha(s[i]))
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
	return (s);
}
