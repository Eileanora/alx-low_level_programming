#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2D array contains chessboard
 * r: row
 * c: column
 *
 * Return: always void
*/
void print_chessboard(char (*a)[8])
{
	int r, c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);
		}
		_putchar('\n');
	}
}
