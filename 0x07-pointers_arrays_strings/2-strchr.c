#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: target character
 *
 * Return: pointer to answer if found else NULL
*/
char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == '\0')
			break;
		s++;
	}
	return (NULL);
}
