#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: an integer
 * @height: an integer
 * Return: the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **tab, x, y;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}

	else
	{
		for (x = 0; x < height; x++)
		{
			tab[x] = malloc(sizeof(**tab) * width);

			if (tab[x] == 0)
			{
				while (x--)
				{
					free(tab[x]);
				}
				free(tab);
				return (NULL);
			}

			for (y = 0; y < width; y++)
			{
				tab[x][y] = 0;
			}
		}
	}

return (tab);
}
