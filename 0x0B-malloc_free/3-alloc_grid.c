#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - Create a two dimensional array of integers
  * @width: width of array
  * @height: heighht of array
  * Return: Pointer to this array
  */

int **alloc_grid(int width, int height)
{

	int l, c, i;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * width);

	if (p == NULL)
		return (NULL);

	for (l = 0; l < width; l++)
	{
		p[l] = malloc(height * sizeof(int));
		if (p[l] == NULL)
		{
			for (i = l - 1; i >= 0; i--)
			free(p[i]);

			free(p);
			return (NULL);
		}

	for (c = 0; c < height; c++)
	p[l][c] = 0;
	}

return (p);
}
