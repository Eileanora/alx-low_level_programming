#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, sz, m = 0, len;

	char *ans;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
		sz += strlen(av[i]);
	sz += ac + 1;
	ans = malloc((sizeof(char) * sz));
	if (ans == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
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
