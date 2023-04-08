#include "main.h"

char _putchar(char c)
{
	putchar(c);
	return c;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: 2D array casted as a pointer
 * @size: size of the array
 * sum1: sum of the first diagonal
 * sum2: sum of the second diagonal
 * r: row
 * c: column
 *
 * Return: always void
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, r, c;

	for (r = 0; r < size; r++)
	{
		sum1 += *(a + (r * size) + r);
		sum2 += *(a + (r * size) + (size - r - 1));
	}
	printf("%d, %d \n", sum1, sum2);
}

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*------------------------------------------------------------------------------------------------------------------------------------*/

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

//     printf("%s\n", s1);
//     printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}