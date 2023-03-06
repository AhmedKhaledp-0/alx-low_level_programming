#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: char
 * Return: nt
 */
void print_chessboard(char (*a)[8])
{
	int r, n;

	for (r = 0; r < 8; r++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[r][n]);
		}
		_putchar(10);
	}
}
