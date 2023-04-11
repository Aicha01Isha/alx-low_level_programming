#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that nests loop to make grid
 * @width: parameter
 *
 * @height: parameter
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **me;
	int i, r;

	if (width <= 0 || height <= 0)
		return (NULL);
	me = malloc(sizeof(int *) * height);
	if (me == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		me[i] = malloc(sizeof(int) * width);
		if (me[i] == NULL)
		{
			for (; i >= 0; i--)
				free(me[i]);
			free(me);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (r = 0; r < width; r++)
			me[i][r] = 0;
	}
	return (me);
}
