#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the array
 *
 * Void: nothing to return
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		if (i < 8)
			_putchar('\n');
	}
}
