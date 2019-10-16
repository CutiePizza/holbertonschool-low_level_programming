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

	for (l = 0; l < height; l++)
	{
		p[l] = malloc(width * sizeof(int));
		if (p[l] == NULL)
		{
			for (i = 0; i < l; i++)
			free(p[i]);

			free(p);
			return (NULL);
		}

	for (c = 0; c < width; c++)
	p[l][c] = 0;
	}

return (p);
}
