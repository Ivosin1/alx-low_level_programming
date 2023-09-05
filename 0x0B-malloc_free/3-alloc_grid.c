#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2 dimensional
* array of integers.
* @width: width of the array.
* @height: height of the array.
* Return: Pointer to the array.
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int k;
	int l;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (k = 0; k < height; k++)
		{
			array[k] = (int *) malloc(sizeof(int) * width);
			if (array[k] != NULL)
			{
				for (l = 0; l < width; l++)
					array[k][l] = 0;
			}
			else
			{
				while (k >= 0)
				{
					free(array[k]);
					k--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
