#include "main.h"
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
