#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: 2D array representing the chessboard
*
* Description: Each element of `a` represents a row of the chessboard,
*              and the characters are either pieces ('r', 'k', 'b', 'q', 'p')
*              or spaces (' ') for empty squares.
*/
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
