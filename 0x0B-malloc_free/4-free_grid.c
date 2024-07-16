/* File: 4-free_grid.c */
#include "main.h"
#include <stdlib.h> /* For free */

/**
* free_grid - Frees a 2D array of integers
* @grid: The 2D array to be freed
* @height: Height of the grid
*
* Return: Nothing
*/
void free_grid(int **grid, int height)
{
int i;

/* Free each row */
for (i = 0; i < height; i++)
{
free(grid[i]);
}

/* Free the grid itself */
free(grid);
}
