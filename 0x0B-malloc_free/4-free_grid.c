#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - free a grid
  * @grid: Pointer that points on array
  * @height: height of array
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

}
