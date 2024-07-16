#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_grid - prints a grid of integers
* @grid: the address of the two dimensional grid
* @width: width of the grid
* @height: height of the grid
*
* Return: Nothing.
*/
void print_grid(int **grid, int width, int height)
{
int w;
int h;

h = 0;
while (h < height)
{
w = 0;
while (w < width)
{
printf("%d ", grid[h][w]);
w++;
}
printf("\n");
h++;
}
}

/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/
int main(void)
{
int **grid;
int i; /* Declare i outside of the for loop */

grid = alloc_grid(6, 4);
if (grid == NULL)
{
return (1);
}

print_grid(grid, 6, 4);
printf("\n");

/* Use i declared outside the loop */
for (i = 0; i < 4; i++)
{
grid[0][3 + i] = 98 + i;
grid[3][4 + i] = 402 + i;
}

print_grid(grid, 6, 4);

return (0);
}
