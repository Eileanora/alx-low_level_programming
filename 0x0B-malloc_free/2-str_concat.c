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
 * str_concat - concatetenates two strings with null terminated
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new allocated space (sucess)
 * NULL on faliure
*/
char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;

	char *ans;

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	if (s1 == NULL)
		sz1 = 0;
	if (s2 == NULL)
		sz2 = 0;
	ans = malloc(((sz1 + sz2) * sizeof(char)) + 1);
	if (ans == NULL)
		return (NULL);
	for (i = 0; i < sz1; i++)
		ans[i] = s1[i];
	i = sz1;
	while (sz2 > 0)
	{
		ans[i] = *s2;
		s2++;
		i++;
		sz2--;
	}
	ans[i] = '\0';
	return (ans);
}
