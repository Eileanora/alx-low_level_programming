#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2D array of integers
 * NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **ans;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ans = malloc(height * sizeof(int *));
	if (ans == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ans[i] = malloc(width * sizeof(int));	
		if (ans[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			ans[i][j] = 0;
	}
	return (ans);
}
