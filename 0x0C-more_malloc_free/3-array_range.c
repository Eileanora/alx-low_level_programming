#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new allocated space (success)
 * NULL if min > max or malloc fails (fail)
 */
int *array_range(int min, int max)
{
	int sz, i;
	int *ans;

	/* if range is not valid */
	if (min > max)
		return (NULL);
	sz = max - min + 1;
	ans = malloc(sizeof(int) * sz);
	/* if malloc fails to allocate memory */
	if (ans == NULL)
		return (NULL);

	for (i = 0; i < sz; i++)
	{
		ans[i] = min;
		min++;
	}
	return (ans);
}
