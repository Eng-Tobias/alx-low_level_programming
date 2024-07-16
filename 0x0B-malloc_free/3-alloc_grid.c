/* File: 3-alloc_grid.c */
#include "main.h"
#include <stdlib.h> /* For malloc, free */

/**
* alloc_grid - Allocates a 2D array of integers
* @width: Width of the grid
* @height: Height of the grid
*
* Return: Pointer to the 2D array of integers (grid)
* NULL on failure or if width or height is 0 or negative
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/* Check if width or height is 0 or negative */
if (width <= 0 || height <= 0)
return (NULL);

/* Allocate memory for the rows */
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

/* Allocate memory for each column in every row */
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
/* Free previously allocated memory on failure */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
        
/* Initialize each element to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
