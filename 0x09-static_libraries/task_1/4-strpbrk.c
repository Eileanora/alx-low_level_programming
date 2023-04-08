#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search in
 * @accept: string to search for any acceptable byte
 * target: temp pointer to accept
 *
 * Return: pointer if target found, else NULL
*/
char *_strpbrk(char *s, char *accept)
{
	char *target;

	while (*s != '\0')
	{
		target = accept;
		while (*target != '\0')
		{
			if (*s == *target)
				return (s);
			target++;
		}
		s++;/*case not found*/
	}
	return (NULL);
}
