#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: string to search for
 * hay: temp pointer to haystack
 * target: temp pointer to needle
 *
 * Return: char pointer if target found, else NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *hay, *target;

	while (*haystack != '\0')
	{
		hay = haystack;
		target = needle;
		while (*target != '0')
		{
			if (*hay == '\0' && *target != '\0')
				return (NULL);

			if (*hay != *target)
				break;
			hay++;
			target++;
		}
		if (*target == '\0')
			return (hay);
		haystack++;
	}
	return (NULL);
}
