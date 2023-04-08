#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search in
 * @accept: string to search for
 * ans: length of the prefix substring
 * p: temp pointer to accept
 *
 * Return: always int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ans;
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
				break;
			p++;
		}
		if (*p == '\0')
			break;
		s++;
		ans++;
	}
	return (ans);
}
