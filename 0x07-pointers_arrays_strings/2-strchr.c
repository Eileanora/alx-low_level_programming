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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
