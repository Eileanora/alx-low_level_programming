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
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, sz, m = 0;

	char *ans;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		sz += _strlen(av[i]);
	ans = malloc((sz + ac) * sizeof(char) + 1);
	if (ans == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ans[m] = av[i][j];
			m++;
		}
		ans[m] = '\n';
		m++;
	}
	ans[m] = '\0';
	return (ans);
}
