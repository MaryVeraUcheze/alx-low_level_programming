#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **bey;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	bey = malloc(sizeof(int *) * height);

	if (bey == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		bey[x] = malloc(sizeof(int) * width);
		if (bey[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bey[x]);

			free(bey);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		bey[x][y] = 0;
	}

	return (bey);
}
