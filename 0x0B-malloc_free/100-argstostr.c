#include "main.h"
#include <stdlib.h>
#include <string.h>
char *argstostr(int ac, char **av)
{
	int i, j, sz, m = 0, len;

	char *ans;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sz++;
		sz++;
	}
	ans = malloc((sizeof(char) * sz) + 1);
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
