#include "main.h"
/**
 * array_range - Creates an array of integers from min to max, inclusive.
 * @min: The starting value
 * @max: The ending value
 * Return: A pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size ; i++)
	{
	array[i] = min + i;
	}

	return (array);
}
