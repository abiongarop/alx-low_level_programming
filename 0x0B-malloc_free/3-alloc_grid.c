#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int x, y, a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = (int **) malloc(height * sizeof(int));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		m[x] = (int *)malloc(sizeof(int *) * width);

		if (m[x] == NULL)
		{
			for (y = 0; y <= x; y++)
				free(m[y]);
			free(m);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			m[a][b] = 0;
		}
	}
	return (m);
}
