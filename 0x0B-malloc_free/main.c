#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
*/
int _putchar(char *c)
{
	return (write(1, &c, 1));
}

/*---------------------------------------------------------------------------------------------------------------------------*/
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
		{
			for (j = 0; j < i; j++)
				free(ans[j]);
			free(ans);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ans[i][j] = 0;
	}
	return (ans);
}

/*------------------------------------------------------------------------------------------------------------------------------------*/

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}