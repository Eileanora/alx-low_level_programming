#include "main.h"
#include <stdlib.h>
/**
 * _strlen - checks the size of a given string
 * @str: string to check size of
 *
 * Return: size of string (int)
 */
int _strlen(char *str)
{
	int sz = 0;

	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		sz++;
		str++;
	}
	return (sz);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to new allocated space (success)
 * NULL if malloc fails (fail)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int sz1, sz2, sz, i, j;
	char *ans;

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	sz = sz1 + (n >= sz2 ? sz2 : n);

	ans = malloc(sizeof(char) * sz);
	if (ans == NULL)
		return (NULL);
	for (i = 0; i < sz1; i++)
		ans[i] = s1[i];
	for (j = 0; j < (n >= sz2 ? sz2 : n); j++)
		ans[i + j] = s2[j];
	ans[i + j] = '\0';
	return (ans);
}
