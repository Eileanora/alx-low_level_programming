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

/*------------------------------------------------------------------------------------------------------------------------------------*/

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}